cmake_minimum_required(VERSION 3.10)

# get source files
file(GLOB_RECURSE RaylibWrapper_SRC src/*.cpp)
file(GLOB_RECURSE RaylibWrapper_INC include/RaylibWrapper/*.hpp)

# create the static library target
add_library(RaylibWrapper STATIC ${RaylibWrapper_SRC} ${RaylibWrapper_INC})
add_library(RaylibWrapper::RaylibWrapper ALIAS RaylibWrapper)

# set include directory for build and install
target_include_directories(RaylibWrapper PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)
target_include_directories(RaylibWrapper PUBLIC $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>)
target_include_directories(RaylibWrapper INTERFACE $<INSTALL_INTERFACE:include>)

# set library target properties
set_target_properties(RaylibWrapper PROPERTIES
    CXX_STANDARD 11
    ARCHIVE_OUTPUT_DIRECTORY lib
    DEBUG_POSTFIX -d
)

# cmake install rules
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

# generate RaylibWrapperConfigVersion.cmake
write_basic_package_version_file(
    "${PROJECT_BINARY_DIR}/RaylibWrapperConfigVersion.cmake"
    VERSION ${CMAKE_PROJECT_VERSION}
    COMPATIBILITY SameMinorVersion
)

# create regular installation rules
# install license and readme to ${CMAKE_INSTALL_PREFIX}/share/doc/RaylibWrapper
install(FILES LICENSE.md README.md DESTINATION ${CMAKE_INSTALL_DOCDIR})
# install headers to ${CMAKE_INSTALL_PREFIX}/include
install(DIRECTORY include/RaylibWrapper DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(DIRECTORY ${PROJECT_BINARY_DIR}/include/RaylibWrapper DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
# install pdb files to ${CMAKE_INSTALL_PREFIX}/lib, if they exist
install(FILES $<TARGET_FILE_DIR:RaylibWrapper>/$<TARGET_FILE_BASE_NAME:RaylibWrapper>.pdb DESTINATION ${CMAKE_INSTALL_LIBDIR} OPTIONAL)
# install the static library target to ${CMAKE_INSTALL_PREFIX}/lib
install(TARGETS RaylibWrapper EXPORT RaylibWrapperTargets ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(EXPORT RaylibWrapperTargets DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/RaylibWrapper NAMESPACE RaylibWrapper::)
# install cmake package files to ${CMAKE_INSTALL_PREFIX}/lib/cmake/RaylibWrapper
install(FILES ${PROJECT_BINARY_DIR}/RaylibWrapperConfig.cmake DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/RaylibWrapper)
install(FILES ${PROJECT_BINARY_DIR}/RaylibWrapperConfigVersion.cmake DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/RaylibWrapper)

# create build-tree export cmake module
export(TARGETS RaylibWrapper FILE ${PROJECT_BINARY_DIR}/RaylibWrapper.cmake NAMESPACE RaylibWrapper::)