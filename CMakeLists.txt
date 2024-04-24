cmake_minimum_required(VERSION 3.14)
project(raylibwrapper
    VERSION 1.0.0
    DESCRIPTION "Template for C++ library built with CMake"
    LANGUAGES CXX)

#----------------------------------------------------------------------------------------------------------------------
# general settings and options
#----------------------------------------------------------------------------------------------------------------------

include(cmake/utils.cmake)
include(GNUInstallDirs)

string(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}" is_top_level)

# raylibwrapper_SHARED_LIBS option (undefined by default) can be used to force shared/static build
option(raylibwrapper_INSTALL "Generate target for installing raylibwrapper" ${is_top_level})
set_if_undefined(raylibwrapper_INSTALL_CMAKEDIR "${CMAKE_INSTALL_LIBDIR}/cmake/raylibwrapper" CACHE STRING
    "Install path for raylibwrapper package-related CMake files")

if(DEFINED raylibwrapper_SHARED_LIBS)
    set(BUILD_SHARED_LIBS ${raylibwrapper_SHARED_LIBS})
endif()

if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT DEFINED CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

set_if_undefined(CMAKE_CXX_VISIBILITY_PRESET hidden)
set_if_undefined(CMAKE_VISIBILITY_INLINES_HIDDEN ON)

add_library(raylibwrapper) # initialized below
add_library(raylibwrapper::raylibwrapper ALIAS raylibwrapper)

#----------------------------------------------------------------------------------------------------------------------
# raylibwrapper dependencies
#----------------------------------------------------------------------------------------------------------------------

# Search for your dependencies here
target_link_libraries(raylibwrapper PRIVATE raylib)

#----------------------------------------------------------------------------------------------------------------------
# raylibwrapper sources
#----------------------------------------------------------------------------------------------------------------------

include(GenerateExportHeader)
set(export_file_name "export_shared.h")

if(NOT BUILD_SHARED_LIBS)
    set(export_file_name "export_static.h")
endif()

generate_export_header(raylibwrapper EXPORT_FILE_NAME include/RaylibWrapper/${export_file_name})

set(sources
    include/RaylibWrapper/export.h
    include/RaylibWrapper/RaylibWrapper.hpp
    src/RaylibWrapper.cpp)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${sources})

#----------------------------------------------------------------------------------------------------------------------
# raylibwrapper target
#----------------------------------------------------------------------------------------------------------------------

include(CMakePackageConfigHelpers)

target_sources(raylibwrapper PRIVATE ${sources})
target_compile_definitions(raylibwrapper PUBLIC "$<$<NOT:$<BOOL:${BUILD_SHARED_LIBS}>>:RAYLIBWRAPPER_STATIC_DEFINE>")

target_include_directories(raylibwrapper
    PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>")

set_target_properties(raylibwrapper PROPERTIES
    SOVERSION ${PROJECT_VERSION_MAJOR}
    VERSION ${PROJECT_VERSION})

if(raylibwrapper_INSTALL AND NOT CMAKE_SKIP_INSTALL_RULES)
    configure_package_config_file(cmake/raylibwrapper-config.cmake.in raylibwrapper-config.cmake
        INSTALL_DESTINATION "${raylibwrapper_INSTALL_CMAKEDIR}")

    write_basic_package_version_file(raylibwrapper-config-version.cmake
        COMPATIBILITY SameMajorVersion)

    install(TARGETS raylibwrapper EXPORT raylibwrapper_export
        RUNTIME COMPONENT raylibwrapper
        LIBRARY COMPONENT raylibwrapper NAMELINK_COMPONENT raylibwrapper-dev
        ARCHIVE COMPONENT raylibwrapper-dev
        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")
    install(DIRECTORY include/
        TYPE INCLUDE
        COMPONENT raylibwrapper-dev)
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/include/raylibwrapper/${export_file_name}"
        COMPONENT raylibwrapper-dev
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/raylibwrapper")

    set(targets_file "raylibwrapper-shared-targets.cmake")

    if(NOT BUILD_SHARED_LIBS)
        set(targets_file "raylibwrapper-static-targets.cmake")
    endif()

    install(EXPORT raylibwrapper_export
        COMPONENT raylibwrapper-dev
        FILE "${targets_file}"
        DESTINATION "${raylibwrapper_INSTALL_CMAKEDIR}"
        NAMESPACE raylibwrapper::)

    install(FILES
        "${CMAKE_CURRENT_BINARY_DIR}/raylibwrapper-config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/raylibwrapper-config-version.cmake"
        COMPONENT raylibwrapper-dev
        DESTINATION "${raylibwrapper_INSTALL_CMAKEDIR}")

    if(MSVC)
        set(pdb_file "")
        set(pdb_file_destination "")

        if(BUILD_SHARED_LIBS)
            set(pdb_file "$<TARGET_PDB_FILE:raylibwrapper>")
            set(pdb_file_destination "${CMAKE_INSTALL_BINDIR}")
        else()
            # TARGET_PDB_FILE does not work for pdb file generated for static library build, determining it manually
            set(pdb_file "$<TARGET_FILE_DIR:raylibwrapper>/$<TARGET_FILE_PREFIX:raylibwrapper>$<TARGET_FILE_BASE_NAME:raylibwrapper>.pdb")
            set(pdb_file_destination "${CMAKE_INSTALL_LIBDIR}")
        endif()

        install(FILES "${pdb_file}"
            COMPONENT raylibwrapper-dev
            CONFIGURATIONS Debug RelWithDebInfo
            DESTINATION "${pdb_file_destination}"
            OPTIONAL)
    endif()
endif()

