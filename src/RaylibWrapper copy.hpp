// #ifndef RAYLIB_WRAPPER_H
// #define RAYLIB_WRAPPER_H

// // #include "raylib.h"

// namespace raylib
// {
//     // struct Vector2;   // Vector2, 2 components
//     // struct Vector3;   // Vector3, 3 components
//     // struct Vector4;   // Vector4, 4 components
//     // struct Matrix;    // Matrix, 4x4 components, column major, OpenGL style, right handed
//     // struct Color;     // Color, 4 components, R8G8B8A8 (32bit)
//     // struct Rectangle; // Rectangle, 4 components

//     // struct Image;         // Image, pixel data stored in CPU memory (RAM)
//     // struct Texture;       // Texture, tex data stored in GPU memory (VRAM)
//     // struct RenderTexture; // RenderTexture, fbo for texture rendering
//     // struct NPatchInfo;    // NPatchInfo, n-patch layout info
//     // struct GlyphInfo;     // GlyphInfo, font characters glyphs info
//     // struct Font;          // Font, font texture and GlyphInfo array data

//     // struct Camera3D; // Camera, defines position/orientation in 3d space

//     // struct Camera2D;       // Camera2D, defines position/orientation in 2d space
//     // struct Mesh;           // Mesh, vertex data and vao/vbo
//     // struct Shader;         // Shader
//     // struct MaterialMap;    // MaterialMap
//     // struct Material;       // Material, includes shader and maps
//     // struct Transform;      // Transform, vectex transformation data
//     // struct BoneInfo;       // Bone, skeletal animation bone
//     // struct Model;          // Model, meshes, materials and animation data
//     // struct ModelAnimation; // ModelAnimation
//     // struct Ray;            // Ray, ray for raycasting
//     // struct RayCollision;   // RayCollision, ray hit information
//     // struct BoundingBox;    // BoundingBox

//     // struct Wave;        // Wave, audio wave data
//     // struct AudioStream; // AudioStream, custom audio stream
//     // struct Sound;       // Sound
//     // struct Music;       // Music, audio stream, anything longer than ~10 seconds should be streamed

//     // struct VrDeviceInfo;   // VrDeviceInfo, Head-Mounted-Display device parameters
//     // struct VrStereoConfig; // VrStereoConfig, VR stereo rendering configuration for simulator

//     // struct FilePathList; // File path list

//     // struct AutomationEvent;     // Automation event
//     // struct AutomationEventList; // Automation event list

//     // Custom raylib color palette for amazing visuals on WHITE background
// #define LIGHTGRAY \
//     (Color) { 200, 200, 200, 255 } // Light Gray
// #define GRAY \
//     (Color) { 130, 130, 130, 255 } // Gray
// #define DARKGRAY \
//     (Color) { 80, 80, 80, 255 } // Dark Gray
// #define YELLOW \
//     (Color) { 253, 249, 0, 255 } // Yellow
// #define GOLD \
//     (Color) { 255, 203, 0, 255 } // Gold
// #define ORANGE \
//     (Color) { 255, 161, 0, 255 } // Orange
// #define PINK \
//     (Color) { 255, 109, 194, 255 } // Pink
// #define RED \
//     (Color) { 230, 41, 55, 255 } // Red
// #define MAROON \
//     (Color) { 190, 33, 55, 255 } // Maroon
// #define GREEN \
//     (Color) { 0, 228, 48, 255 } // Green
// #define LIME \
//     (Color) { 0, 158, 47, 255 } // Lime
// #define DARKGREEN \
//     (Color) { 0, 117, 44, 255 } // Dark Green
// #define SKYBLUE \
//     (Color) { 102, 191, 255, 255 } // Sky Blue
// #define BLUE \
//     (Color) { 0, 121, 241, 255 } // Blue
// #define DARKBLUE \
//     (Color) { 0, 82, 172, 255 } // Dark Blue
// #define PURPLE \
//     (Color) { 200, 122, 255, 255 } // Purple
// #define VIOLET \
//     (Color) { 135, 60, 190, 255 } // Violet
// #define DARKPURPLE \
//     (Color) { 112, 31, 126, 255 } // Dark Purple
// #define BEIGE \
//     (Color) { 211, 176, 131, 255 } // Beige
// #define BROWN \
//     (Color) { 127, 106, 79, 255 } // Brown
// #define DARKBROWN \
//     (Color) { 76, 63, 47, 255 } // Dark Brown

// #define WHITE \
//     (Color) { 255, 255, 255, 255 } // White
// #define BLACK \
//     (Color) { 0, 0, 0, 255 } // Black
// #define BLANK \
//     (Color) { 0, 0, 0, 0 } // Blank (Transparent)
// #define MAGENTA \
//     (Color) { 255, 0, 255, 255 } // Magenta
// #define RAYWHITE \
//     (Color) { 245, 245, 245, 255 } // My own White (raylib logo)

//     // Window-related functions
//     void InitWindow(int width, int height, const char *title)
//     {
//         ::InitWindow(width, height, title); // Initialize window and OpenGL context
//     }

//     void CloseWindow()
//     {
//         ::CloseWindow(); // Close window and unload OpenGL context
//     }

//     bool WindowShouldClose()
//     {
//         return ::WindowShouldClose(); // Check if application should close (KEY_ESCAPE pressed or windows close icon clicked)
//     }

//     bool IsWindowReady()
//     {
//         return ::IsWindowReady(); // Check if window has been initialized successfully
//     }

//     bool IsWindowFullscreen()
//     {
//         return ::IsWindowFullscreen(); // Check if window is currently fullscreen
//     }

//     bool IsWindowHidden()
//     {
//         return ::IsWindowHidden(); // Check if window is currently hidden (only PLATFORM_DESKTOP)
//     }

//     bool IsWindowMinimized()
//     {
//         return ::IsWindowMinimized(); // Check if window is currently minimized (only PLATFORM_DESKTOP)
//     }

//     bool IsWindowMaximized()
//     {
//         return ::IsWindowMaximized(); // Check if window is currently maximized (only PLATFORM_DESKTOP)
//     }

//     bool IsWindowFocused()
//     {
//         return ::IsWindowFocused(); // Check if window is currently focused (only PLATFORM_DESKTOP)
//     }

//     bool IsWindowResized()
//     {
//         return ::IsWindowResized(); // Check if window has been resized last frame
//     }

//     bool IsWindowState(unsigned int flag)
//     {
//         return ::IsWindowState(flag); // Check if one specific window flag is enabled
//     }

//     void SetWindowState(unsigned int flags)
//     {
//         ::SetWindowState(flags); // Set window configuration state using flags (only PLATFORM_DESKTOP)
//     }

//     void ClearWindowState(unsigned int flags)
//     {
//         ::ClearWindowState(flags); // Clear window configuration state flags
//     }

//     void ToggleFullscreen()
//     {
//         ::ToggleFullscreen(); // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
//     }

//     void ToggleBorderlessWindowed()
//     {
//         ::ToggleBorderlessWindowed(); // Toggle window state: borderless windowed (only PLATFORM_DESKTOP)
//     }

//     void MaximizeWindow()
//     {
//         ::MaximizeWindow(); // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
//     }

//     void MinimizeWindow()
//     {
//         ::MinimizeWindow(); // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
//     }

//     void RestoreWindow()
//     {
//         ::RestoreWindow(); // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
//     }

//     void SetWindowIcon(Image image)
//     {
//         ::SetWindowIcon(image); // Set icon for window (single image, RGBA 32bit, only PLATFORM_DESKTOP)
//     }

//     void SetWindowIcons(Image *images, int count)
//     {
//         ::SetWindowIcons(images, count); // Set icon for window (multiple images, RGBA 32bit, only PLATFORM_DESKTOP)
//     }

//     void SetWindowTitle(const char *title)
//     {
//         ::SetWindowTitle(title); // Set title for window (only PLATFORM_DESKTOP and PLATFORM_WEB)
//     }

//     void SetWindowPosition(int x, int y)
//     {
//         ::SetWindowPosition(x, y); // Set window position on screen (only PLATFORM_DESKTOP)
//     }

//     void SetWindowMonitor(int monitor)
//     {
//         ::SetWindowMonitor(monitor); // Set monitor for the current window
//     }

//     void SetWindowMinSize(int width, int height)
//     {
//         ::SetWindowMinSize(width, height); // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
//     }

//     void SetWindowMaxSize(int width, int height)
//     {
//         ::SetWindowMaxSize(width, height); // Set window maximum dimensions (for FLAG_WINDOW_RESIZABLE)
//     }

//     void SetWindowSize(int width, int height)
//     {
//         ::SetWindowSize(width, height); // Set window dimensions
//     }

//     void SetWindowOpacity(float opacity)
//     {
//         ::SetWindowOpacity(opacity); // Set window opacity [0.0f..1.0f] (only PLATFORM_DESKTOP)
//     }

//     void SetWindowFocused()
//     {
//         ::SetWindowFocused(); // Set window focused (only PLATFORM_DESKTOP)
//     }

//     void *GetWindowHandle()
//     {
//         return ::GetWindowHandle(); // Get native window handle
//     }

//     int GetScreenWidth()
//     {
//         return ::GetScreenWidth(); // Get current screen width
//     }

//     int GetScreenHeight()
//     {
//         return ::GetScreenHeight(); // Get current screen height
//     }

//     int GetRenderWidth()
//     {
//         return ::GetRenderWidth(); // Get current render width (it considers HiDPI)
//     }

//     int GetRenderHeight()
//     {
//         return ::GetRenderHeight(); // Get current render height (it considers HiDPI)
//     }

//     int GetMonitorCount()
//     {
//         return ::GetMonitorCount(); // Get number of connected monitors
//     }

//     int GetCurrentMonitor()
//     {
//         return ::GetCurrentMonitor(); // Get current connected monitor
//     }

//     Vector2 GetMonitorPosition(int monitor)
//     {
//         return ::GetMonitorPosition(monitor); // Get specified monitor position
//     }

//     int GetMonitorWidth(int monitor)
//     {
//         return ::GetMonitorWidth(monitor); // Get specified monitor width (current video mode used by monitor)
//     }

//     int GetMonitorHeight(int monitor)
//     {
//         return ::GetMonitorHeight(monitor); // Get specified monitor height (current video mode used by monitor)
//     }

//     int GetMonitorPhysicalWidth(int monitor)
//     {
//         return ::GetMonitorPhysicalWidth(monitor); // Get specified monitor physical width in millimetres
//     }

//     int GetMonitorPhysicalHeight(int monitor)
//     {
//         return ::GetMonitorPhysicalHeight(monitor); // Get specified monitor physical height in millimetres
//     }

//     int GetMonitorRefreshRate(int monitor)
//     {
//         return ::GetMonitorRefreshRate(monitor); // Get specified monitor refresh rate
//     }

//     Vector2 GetWindowPosition()
//     {
//         return ::GetWindowPosition(); // Get window position XY on monitor
//     }

//     Vector2 GetWindowScaleDPI()
//     {
//         return ::GetWindowScaleDPI(); // Get window scale DPI factor
//     }

//     const char *GetMonitorName(int monitor)
//     {
//         return ::GetMonitorName(monitor); // Get the human-readable, UTF-8 encoded name of the specified monitor
//     }

//     void SetClipboardText(const char *text)
//     {
//         ::SetClipboardText(text); // Set clipboard text content
//     }

//     const char *GetClipboardText()
//     {
//         return ::GetClipboardText(); // Get clipboard text content
//     }

//     void EnableEventWaiting()
//     {
//         ::EnableEventWaiting(); // Enable waiting for events on EndDrawing(), no automatic event polling
//     }

//     void DisableEventWaiting()
//     {
//         ::DisableEventWaiting(); // Disable waiting for events on EndDrawing(), automatic events polling
//     }

//     // Cursor-related functions
//     void ShowCursor()
//     {
//         ::ShowCursor(); // Shows cursor
//     }

//     void HideCursor()
//     {
//         ::HideCursor(); // Hides cursor
//     }

//     bool IsCursorHidden()
//     {
//         return ::IsCursorHidden(); // Check if cursor is not visible
//     }

//     void EnableCursor()
//     {
//         ::EnableCursor(); // Enables cursor (unlock cursor)
//     }

//     void DisableCursor()
//     {
//         ::DisableCursor(); // Disables cursor (lock cursor)
//     }

//     bool IsCursorOnScreen()
//     {
//         return ::IsCursorOnScreen(); // Check if cursor is on the screen
//     }

//     // Drawing-related functions
//     void ClearBackground(Color color)
//     {
//         ::ClearBackground(color); // Set background color (framebuffer clear color)
//     }

//     void BeginDrawing()
//     {
//         ::BeginDrawing(); // Setup canvas (framebuffer) to start drawing
//     }

//     void EndDrawing()
//     {
//         ::EndDrawing(); // End canvas drawing and swap buffers (double buffering)
//     }

//     void BeginMode2D(Camera2D camera)
//     {
//         ::BeginMode2D(camera); // Begin 2D mode with custom camera (2D)
//     }

//     void EndMode2D()
//     {
//         ::EndMode2D(); // Ends 2D mode with custom camera
//     }

//     void BeginMode3D(Camera3D camera)
//     {
//         ::BeginMode3D(camera); // Begin 3D mode with custom camera (3D)
//     }

//     void EndMode3D()
//     {
//         ::EndMode3D(); // Ends 3D mode and returns to default 2D orthographic mode
//     }

//     void BeginTextureMode(RenderTexture2D target)
//     {
//         ::BeginTextureMode(target); // Begin drawing to render texture
//     }

//     void EndTextureMode()
//     {
//         ::EndTextureMode(); // Ends drawing to render texture
//     }

//     void BeginShaderMode(Shader shader)
//     {
//         ::BeginShaderMode(shader); // Begin custom shader drawing
//     }

//     void EndShaderMode()
//     {
//         ::EndShaderMode(); // End custom shader drawing (use default shader)
//     }

//     void BeginBlendMode(int mode)
//     {
//         ::BeginBlendMode(mode); // Begin blending mode (alpha, additive, multiplied, subtract, custom)
//     }

//     void EndBlendMode()
//     {
//         ::EndBlendMode(); // End blending mode (reset to default: alpha blending)
//     }

//     void BeginScissorMode(int x, int y, int width, int height)
//     {
//         ::BeginScissorMode(x, y, width, height); // Begin scissor mode (define screen area for following drawing)
//     }

//     void EndScissorMode()
//     {
//         ::EndScissorMode(); // End scissor mode
//     }

//     void BeginVrStereoMode(VrStereoConfig config)
//     {
//         ::BeginVrStereoMode(config); // Begin stereo rendering (requires VR simulator)
//     }

//     void EndVrStereoMode()
//     {
//         ::EndVrStereoMode(); // End stereo rendering (requires VR simulator)
//     }

//     // VR stereo config functions for VR simulator
//     VrStereoConfig LoadVrStereoConfig(VrDeviceInfo device)
//     {
//         return ::LoadVrStereoConfig(device); // Load VR stereo config for VR simulator device parameters
//     }

//     void UnloadVrStereoConfig(VrStereoConfig config)
//     {
//         ::UnloadVrStereoConfig(config); // Unload VR stereo config
//     }

//     // Shader management functions
//     // NOTE: Shader functionality is not available on OpenGL 1.1

//     Shader LoadShader(const char *vsFileName, const char *fsFileName)
//     {
//         return ::LoadShader(vsFileName, fsFileName); // Load shader from files and bind default locations
//     }

//     Shader LoadShaderFromMemory(const char *vsCode, const char *fsCode)
//     {
//         return ::LoadShaderFromMemory(vsCode, fsCode); // Load shader from code strings and bind default locations
//     }

//     bool IsShaderReady(Shader shader)
//     {
//         return ::IsShaderReady(shader); // Check if a shader is ready
//     }

//     int GetShaderLocation(Shader shader, const char *uniformName)
//     {
//         return ::GetShaderLocation(shader, uniformName); // Get shader uniform location
//     }

//     int GetShaderLocationAttrib(Shader shader, const char *attribName)
//     {
//         return ::GetShaderLocationAttrib(shader, attribName); // Get shader attribute location
//     }

//     void SetShaderValue(Shader shader, int locIndex, const void *value, int uniformType)
//     {
//         ::SetShaderValue(shader, locIndex, value, uniformType); // Set shader uniform value
//     }

//     void SetShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count)
//     {
//         ::SetShaderValueV(shader, locIndex, value, uniformType, count); // Set shader uniform value vector
//     }

//     void SetShaderValueMatrix(Shader shader, int locIndex, Matrix mat)
//     {
//         ::SetShaderValueMatrix(shader, locIndex, mat); // Set shader uniform value (matrix 4x4)
//     }

//     void SetShaderValueTexture(Shader shader, int locIndex, Texture2D texture)
//     {
//         ::SetShaderValueTexture(shader, locIndex, texture); // Set shader uniform value for texture (sampler2d)
//     }

//     void UnloadShader(Shader shader)
//     {
//         ::UnloadShader(shader); // Unload shader from GPU memory (VRAM)
//     }

//     // Screen-space-related functions
//     Ray GetMouseRay(Vector2 mousePosition, Camera camera)
//     {
//         return ::GetMouseRay(mousePosition, camera); // Get a ray trace from mouse position
//     }

//     Matrix GetCameraMatrix(Camera camera)
//     {
//         return ::GetCameraMatrix(camera); // Get camera transform matrix (view matrix)
//     }

//     Matrix GetCameraMatrix2D(Camera2D camera)
//     {
//         return ::GetCameraMatrix2D(camera); // Get camera 2d transform matrix
//     }

//     Vector2 GetWorldToScreen(Vector3 position, Camera camera)
//     {
//         return ::GetWorldToScreen(position, camera); // Get the screen space position for a 3d world space position
//     }

//     Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera)
//     {
//         return ::GetScreenToWorld2D(position, camera); // Get the world space position for a 2d camera screen space position
//     }

//     Vector2 GetWorldToScreenEx(Vector3 position, Camera camera, int width, int height)
//     {
//         return ::GetWorldToScreenEx(position, camera, width, height); // Get size position for a 3d world space position
//     }

//     Vector2 GetWorldToScreen2D(Vector2 position, Camera2D camera)
//     {
//         return ::GetWorldToScreen2D(position, camera); // Get the screen space position for a 2d camera world space position
//     }

//     void SetTargetFPS(int fps)
//     {
//         ::SetTargetFPS(fps); // Set target FPS (maximum)
//     }

//     float GetFrameTime(void)
//     {
//         return ::GetFrameTime(); // Get time in seconds for last frame drawn (delta time)
//     }

//     double GetTime(void)
//     {
//         return ::GetTime(); // Get elapsed time in seconds since InitWindow()
//     }

//     int GetFPS(void)
//     {
//         return ::GetFPS(); // Get current FPS
//     }

//     // Custom frame control functions
//     // NOTE: Those functions are intended for advance users that want full control over the frame processing
//     // By default EndDrawing() does this job: draws everything + SwapScreenBuffer() + manage frame timing + PollInputEvents()
//     // To avoid that behaviour and control frame processes manually, enable in config.h: SUPPORT_CUSTOM_FRAME_CONTROL
//     void SwapScreenBuffer(void)
//     {
//         ::SwapScreenBuffer(); // Swap back buffer with front buffer (screen drawing)
//     }

//     void PollInputEvents(void)
//     {
//         ::PollInputEvents(); // Register all input events
//     }

//     void WaitTime(double seconds)
//     {
//         ::WaitTime(seconds); // Wait for some time (halt program execution)
//     }

//     // Random values generation functions
//     void SetRandomSeed(unsigned int seed)
//     {
//         ::SetRandomSeed(seed); // Set the seed for the random number generator
//     }

//     int GetRandomValue(int min, int max)
//     {
//         return ::GetRandomValue(min, max); // Get a random value between min and max (both included)
//     }

//     int *LoadRandomSequence(unsigned int count, int min, int max)
//     {
//         return ::LoadRandomSequence(count, min, max); // Load random values sequence, no values repeated
//     }

//     void UnloadRandomSequence(int *sequence)
//     {
//         ::UnloadRandomSequence(sequence); // Unload random values sequence
//     }

//     void TakeScreenshot(const char *fileName)
//     {
//         ::TakeScreenshot(fileName); // Takes a screenshot of the current screen (filename extension defines format)
//     }

//     void SetConfigFlags(unsigned int flags)
//     {
//         ::SetConfigFlags(flags); // Setup init configuration flags (view FLAGS)
//     }

//     void OpenURL(const char *url)
//     {
//         ::OpenURL(url); // Open URL with the default system browser (if available)
//     }

//     void TraceLog(int logLevel, const char *text, ...)
//     {
//         ::TraceLog(logLevel, text); // Show trace log messages (LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR...)
//     }

//     void SetTraceLogLevel(int logLevel)
//     {
//         ::SetTraceLogLevel(logLevel); // Set the current threshold (minimum) log level
//     }

//     void *MemAlloc(unsigned int size)
//     {
//         return ::MemAlloc(size); // Internal memory allocator
//     }

//     void *MemRealloc(void *ptr, unsigned int size)
//     {
//         return ::MemRealloc(ptr, size); // Internal memory reallocator
//     }

//     void MemFree(void *ptr)
//     {
//         ::MemFree(ptr); // Internal memory free
//     }

//     // Set custom callbacks
//     // WARNING: Callbacks setup is intended for advance users
//     void SetTraceLogCallback(TraceLogCallback callback)
//     {
//         ::SetTraceLogCallback(callback); // Set custom trace log
//     }

//     void SetLoadFileDataCallback(LoadFileDataCallback callback)
//     {
//         ::SetLoadFileDataCallback(callback); // Set custom file binary data loader
//     }

//     void SetSaveFileDataCallback(SaveFileDataCallback callback)
//     {
//         ::SetSaveFileDataCallback(callback); // Set custom file binary data saver
//     }

//     void SetLoadFileTextCallback(LoadFileTextCallback callback)
//     {
//         ::SetLoadFileTextCallback(callback); // Set custom file text data loader
//     }

//     void SetSaveFileTextCallback(SaveFileTextCallback callback)
//     {
//         ::SetSaveFileTextCallback(callback); // Set custom file text data saver
//     }

//     unsigned char *LoadFileData(const char *fileName, int *dataSize)
//     {
//         return ::LoadFileData(fileName, dataSize); // Load file data as byte array (read)
//     }

//     void UnloadFileData(unsigned char *data)
//     {
//         ::UnloadFileData(data); // Unload file data allocated by LoadFileData()
//     }

//     bool SaveFileData(const char *fileName, void *data, int dataSize)
//     {
//         return ::SaveFileData(fileName, data, dataSize); // Save data to file from byte array (write), returns true on success
//     }

//     bool ExportDataAsCode(const unsigned char *data, int dataSize, const char *fileName)
//     {
//         return ::ExportDataAsCode(data, dataSize, fileName); // Export data to code (.h), returns true on success
//     }

//     char *LoadFileText(const char *fileName)
//     {
//         return ::LoadFileText(fileName); // Load text data from file (read), returns a '\0' terminated string
//     }

//     void UnloadFileText(char *text)
//     {
//         ::UnloadFileText(text); // Unload file text data allocated by LoadFileText()
//     }

//     bool SaveFileText(const char *fileName, char *text)
//     {
//         return ::SaveFileText(fileName, text); // Save text data to file (write), string must be '\0' terminated, returns true on success
//     }

//     bool FileExists(const char *fileName)
//     {
//         return ::FileExists(fileName); // Check if file exists
//     }

//     bool DirectoryExists(const char *dirPath)
//     {
//         return ::DirectoryExists(dirPath); // Check if a directory path exists
//     }

//     bool IsFileExtension(const char *fileName, const char *ext)
//     {
//         return ::IsFileExtension(fileName, ext); // Check file extension (including point: .png, .wav)
//     }

//     int GetFileLength(const char *fileName)
//     {
//         return ::GetFileLength(fileName); // Get file length in bytes (NOTE: GetFileSize() conflicts with windows.h)
//     }

//     const char *GetFileExtension(const char *fileName)
//     {
//         return ::GetFileExtension(fileName); // Get pointer to extension for a filename string (includes dot: '.png')
//     }

//     const char *GetFileName(const char *filePath)
//     {
//         return ::GetFileName(filePath); // Get pointer to filename for a path string
//     }

//     const char *GetFileNameWithoutExt(const char *filePath)
//     {
//         return ::GetFileNameWithoutExt(filePath); // Get filename string without extension (uses static string)
//     }

//     const char *GetDirectoryPath(const char *filePath)
//     {
//         return ::GetDirectoryPath(filePath); // Get full path for a given fileName with path (uses static string)
//     }

//     const char *GetPrevDirectoryPath(const char *dirPath)
//     {
//         return ::GetPrevDirectoryPath(dirPath); // Get previous directory path for a given path (uses static string)
//     }

//     const char *GetWorkingDirectory(void)
//     {
//         return ::GetWorkingDirectory(); // Get current working directory (uses static string)
//     }

//     const char *GetApplicationDirectory(void)
//     {
//         return ::GetApplicationDirectory(); // Get the directory of the running application (uses static string)
//     }

//     bool ChangeDirectory(const char *dir)
//     {
//         return ::ChangeDirectory(dir); // Change working directory, return true on success
//     }

//     bool IsPathFile(const char *path)
//     {
//         return ::IsPathFile(path); // Check if a given path is a file or a directory
//     }

//     FilePathList LoadDirectoryFiles(const char *dirPath)
//     {
//         return ::LoadDirectoryFiles(dirPath); // Load directory filepaths
//     }

//     FilePathList LoadDirectoryFilesEx(const char *basePath, const char *filter, bool scanSubdirs)
//     {
//         return ::LoadDirectoryFilesEx(basePath, filter, scanSubdirs); // Load directory filepaths with extension filtering and recursive directory scan
//     }

//     void UnloadDirectoryFiles(FilePathList files)
//     {
//         ::UnloadDirectoryFiles(files); // Unload filepaths
//     }

//     bool IsFileDropped(void)
//     {
//         return ::IsFileDropped(); // Check if a file has been dropped into window
//     }

//     FilePathList LoadDroppedFiles(void)
//     {
//         return ::LoadDroppedFiles(); // Load dropped filepaths
//     }

//     void UnloadDroppedFiles(FilePathList files)
//     {
//         ::UnloadDroppedFiles(files); // Unload dropped filepaths
//     }

//     long GetFileModTime(const char *fileName)
//     {
//         return ::GetFileModTime(fileName); // Get file modification time (last write time)
//     }

//     unsigned char *CompressData(const unsigned char *data, int dataSize, int *compDataSize)
//     {
//         return ::CompressData(data, dataSize, compDataSize); // Compress data (DEFLATE algorithm), memory must be MemFree()
//     }

//     unsigned char *DecompressData(const unsigned char *compData, int compDataSize, int *dataSize)
//     {
//         return ::DecompressData(compData, compDataSize, dataSize); // Decompress data (DEFLATE algorithm), memory must be MemFree()
//     }

//     char *EncodeDataBase64(const unsigned char *data, int dataSize, int *outputSize)
//     {
//         return ::EncodeDataBase64(data, dataSize, outputSize); // Encode data to Base64 string, memory must be MemFree()
//     }

//     unsigned char *DecodeDataBase64(const unsigned char *data, int *outputSize)
//     {
//         return ::DecodeDataBase64(data, outputSize); // Decode Base64 string data, memory must be MemFree()
//     }

//     AutomationEventList LoadAutomationEventList(const char *fileName)
//     {
//         return ::LoadAutomationEventList(fileName); // Load automation events list from file, NULL for empty list, capacity = MAX_AUTOMATION_EVENTS
//     }

//     void UnloadAutomationEventList(AutomationEventList *list)
//     {
//         ::UnloadAutomationEventList(*list); // Unload automation events list from file
//     }

//     bool ExportAutomationEventList(AutomationEventList list, const char *fileName)
//     {
//         return ::ExportAutomationEventList(list, fileName); // Export automation events list as text file
//     }

//     void SetAutomationEventList(AutomationEventList *list)
//     {
//         ::SetAutomationEventList(list); // Set automation event list to record to
//     }

//     void SetAutomationEventBaseFrame(int frame)
//     {
//         ::SetAutomationEventBaseFrame(frame); // Set automation event internal base frame to start recording
//     }

//     void StartAutomationEventRecording(void)
//     {
//         ::StartAutomationEventRecording(); // Start recording automation events (AutomationEventList must be set)
//     }

//     void StopAutomationEventRecording(void)
//     {
//         ::StopAutomationEventRecording(); // Stop recording automation events
//     }

//     void PlayAutomationEvent(AutomationEvent event)
//     {
//         ::PlayAutomationEvent(event); // Play a recorded automation event
//     }

//     //------------------------------------------------------------------------------------
//     // Input Handling Functions (Module: core)
//     //------------------------------------------------------------------------------------

//     // Input-related functions: keyboard
//     bool IsKeyPressed(int key)
//     {
//         return ::IsKeyPressed(key); // Check if a key has been pressed once
//     }

//     bool IsKeyPressedRepeat(int key)
//     {
//         return ::IsKeyPressedRepeat(key); // Check if a key has been pressed again (Only PLATFORM_DESKTOP)
//     }

//     bool IsKeyDown(int key)
//     {
//         return ::IsKeyDown(key); // Check if a key is being pressed
//     }

//     bool IsKeyReleased(int key)
//     {
//         return ::IsKeyReleased(key); // Check if a key has been released once
//     }

//     bool IsKeyUp(int key)
//     {
//         return ::IsKeyUp(key); // Check if a key is NOT being pressed
//     }

//     int GetKeyPressed(void)
//     {
//         return ::GetKeyPressed(); // Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
//     }

//     int GetCharPressed(void)
//     {
//         return ::GetCharPressed(); // Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
//     }

//     void SetExitKey(int key)
//     {
//         ::SetExitKey(key); // Set a custom key to exit program (default is ESC)
//     }

//     // Input-related functions: gamepads
//     bool IsGamepadAvailable(int gamepad)
//     {
//         return ::IsGamepadAvailable(gamepad); // Check if a gamepad is available
//     }

//     const char *GetGamepadName(int gamepad)
//     {
//         return ::GetGamepadName(gamepad); // Get gamepad internal name id
//     }

//     bool IsGamepadButtonPressed(int gamepad, int button)
//     {
//         return ::IsGamepadButtonPressed(gamepad, button); // Check if a gamepad button has been pressed once
//     }

//     bool IsGamepadButtonDown(int gamepad, int button)
//     {
//         return ::IsGamepadButtonDown(gamepad, button); // Check if a gamepad button is being pressed
//     }

//     bool IsGamepadButtonReleased(int gamepad, int button)
//     {
//         return ::IsGamepadButtonReleased(gamepad, button); // Check if a gamepad button has been released once
//     }

//     bool IsGamepadButtonUp(int gamepad, int button)
//     {
//         return ::IsGamepadButtonUp(gamepad, button); // Check if a gamepad button is NOT being pressed
//     }

//     int GetGamepadButtonPressed(void)
//     {
//         return ::GetGamepadButtonPressed(); // Get the last gamepad button pressed
//     }

//     int GetGamepadAxisCount(int gamepad)
//     {
//         return ::GetGamepadAxisCount(gamepad); // Get gamepad axis count for a gamepad
//     }

//     float GetGamepadAxisMovement(int gamepad, int axis)
//     {
//         return ::GetGamepadAxisMovement(gamepad, axis); // Get axis movement value for a gamepad axis
//     }

//     int SetGamepadMappings(const char *mappings)
//     {
//         return ::SetGamepadMappings(mappings); // Set internal gamepad mappings (SDL_GameControllerDB)
//     }

//     // Input-related functions: mouse
//     bool IsMouseButtonPressed(int button)
//     {
//         return ::IsMouseButtonPressed(button); // Check if a mouse button has been pressed once
//     }

//     bool IsMouseButtonDown(int button)
//     {
//         return ::IsMouseButtonDown(button); // Check if a mouse button is being pressed
//     }

//     bool IsMouseButtonReleased(int button)
//     {
//         return ::IsMouseButtonReleased(button); // Check if a mouse button has been released once
//     }

//     bool IsMouseButtonUp(int button)
//     {
//         return ::IsMouseButtonUp(button); // Check if a mouse button is NOT being pressed
//     }

//     int GetMouseX(void)
//     {
//         return ::GetMouseX(); // Get mouse position X
//     }

//     int GetMouseY(void)
//     {
//         return ::GetMouseY(); // Get mouse position Y
//     }

//     Vector2 GetMousePosition(void)
//     {
//         return ::GetMousePosition(); // Get mouse position XY
//     }

//     Vector2 GetMouseDelta(void)
//     {
//         return ::GetMouseDelta(); // Get mouse delta between frames
//     }

//     void SetMousePosition(int x, int y)
//     {
//         ::SetMousePosition(x, y); // Set mouse position XY
//     }

//     void SetMouseOffset(int offsetX, int offsetY)
//     {
//         ::SetMouseOffset(offsetX, offsetY); // Set mouse offset
//     }

//     void SetMouseScale(float scaleX, float scaleY)
//     {
//         ::SetMouseScale(scaleX, scaleY); // Set mouse scaling
//     }

//     float GetMouseWheelMove(void)
//     {
//         return ::GetMouseWheelMove(); // Get mouse wheel movement for X or Y, whichever is larger
//     }

//     Vector2 GetMouseWheelMoveV(void)
//     {
//         return ::GetMouseWheelMoveV(); // Get mouse wheel movement for both X and Y
//     }

//     void SetMouseCursor(int cursor)
//     {
//         ::SetMouseCursor(cursor); // Set mouse cursor
//     }

//     // Input-related functions: touch
//     int GetTouchX(void)
//     {
//         return ::GetTouchX(); // Get touch position X for touch point 0 (relative to screen size)
//     }

//     int GetTouchY(void)
//     {
//         return ::GetTouchY(); // Get touch position Y for touch point 0 (relative to screen size)
//     }

//     Vector2 GetTouchPosition(int index)
//     {
//         return ::GetTouchPosition(index); // Get touch position XY for a touch point index (relative to screen size)
//     }

//     int GetTouchPointId(int index)
//     {
//         return ::GetTouchPointId(index); // Get touch point identifier for given index
//     }

//     int GetTouchPointCount(void)
//     {
//         return ::GetTouchPointCount(); // Get number of touch points
//     }

//     //------------------------------------------------------------------------------------
//     // Gestures and Touch Handling Functions (Module: rgestures)
//     //------------------------------------------------------------------------------------

//     void SetGesturesEnabled(unsigned int flags)
//     {
//         ::SetGesturesEnabled(flags); // Enable a set of gestures using flags
//     }

//     bool IsGestureDetected(unsigned int gesture)
//     {
//         return ::IsGestureDetected(gesture); // Check if a gesture has been detected
//     }

//     int GetGestureDetected(void)
//     {
//         return ::GetGestureDetected(); // Get the latest detected gesture
//     }

//     float GetGestureHoldDuration(void)
//     {
//         return ::GetGestureHoldDuration(); // Get gesture hold time in milliseconds
//     }

//     Vector2 GetGestureDragVector(void)
//     {
//         return ::GetGestureDragVector(); // Get gesture drag vector
//     }

//     float GetGestureDragAngle(void)
//     {
//         return ::GetGestureDragAngle(); // Get gesture drag angle
//     }

//     Vector2 GetGesturePinchVector(void)
//     {
//         return ::GetGesturePinchVector(); // Get gesture pinch delta
//     }

//     float GetGesturePinchAngle(void)
//     {
//         return ::GetGesturePinchAngle(); // Get gesture pinch angle
//     }

//     //------------------------------------------------------------------------------------
//     // Camera System Functions (Module: rcamera)
//     //------------------------------------------------------------------------------------

//     void UpdateCamera(Camera *camera, int mode)
//     {
//         ::UpdateCamera(camera, mode); // Update camera position for the selected mode
//     }

//     void UpdateCameraPro(Camera *camera, Vector3 movement, Vector3 rotation, float zoom)
//     {
//         ::UpdateCameraPro(camera, movement, rotation, zoom); // Update camera movement/rotation
//     }

//     //------------------------------------------------------------------------------------rshapes------------------------------------------------------------------------------------

//     void SetShapesTexture(Texture2D texture, Rectangle source)
//     {
//         ::SetShapesTexture(texture, source); // Set texture and rectangle to be used on shapes drawing
//     }

//     void DrawPixel(int posX, int posY, Color color)
//     {
//         ::DrawPixel(posX, posY, color); // Draw a pixel
//     }

//     void DrawPixelV(Vector2 position, Color color)
//     {
//         ::DrawPixelV(position, color); // Draw a pixel (Vector version)
//     }

//     void DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)
//     {
//         ::DrawLine(startPosX, startPosY, endPosX, endPosY, color); // Draw a line
//     }

//     void DrawLineV(Vector2 startPos, Vector2 endPos, Color color)
//     {
//         ::DrawLineV(startPos, endPos, color); // Draw a line (using gl lines)
//     }

//     void DrawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)
//     {
//         ::DrawLineEx(startPos, endPos, thick, color); // Draw a line (using triangles/quads)
//     }

//     void DrawLineStrip(Vector2 *points, int pointCount, Color color)
//     {
//         ::DrawLineStrip(points, pointCount, color); // Draw lines sequence (using gl lines)
//     }

//     void DrawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)
//     {
//         ::DrawLineBezier(startPos, endPos, thick, color); // Draw line segment cubic-bezier in-out interpolation
//     }

//     void DrawCircle(int centerX, int centerY, float radius, Color color)
//     {
//         ::DrawCircle(centerX, centerY, radius, color); // Draw a color-filled circle
//     }

//     void DrawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
//     {
//         ::DrawCircleSector(center, radius, startAngle, endAngle, segments, color); // Draw a piece of a circle
//     }

//     void DrawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
//     {
//         ::DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color); // Draw circle sector outline
//     }

//     void DrawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2)
//     {
//         ::DrawCircleGradient(centerX, centerY, radius, color1, color2); // Draw a gradient-filled circle
//     }

//     void DrawCircleV(Vector2 center, float radius, Color color)
//     {
//         ::DrawCircleV(center, radius, color); // Draw a color-filled circle (Vector version)
//     }

//     void DrawCircleLines(int centerX, int centerY, float radius, Color color)
//     {
//         ::DrawCircleLines(centerX, centerY, radius, color); // Draw circle outline
//     }

//     void DrawCircleLinesV(Vector2 center, float radius, Color color)
//     {
//         ::DrawCircleLinesV(center, radius, color); // Draw circle outline (Vector version)
//     }

//     void DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)
//     {
//         ::DrawEllipse(centerX, centerY, radiusH, radiusV, color); // Draw ellipse
//     }

//     void DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)
//     {
//         ::DrawEllipseLines(centerX, centerY, radiusH, radiusV, color); // Draw ellipse outline
//     }

//     void DrawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
//     {
//         ::DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color); // Draw ring
//     }

//     void DrawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
//     {
//         ::DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color); // Draw ring outline
//     }

//     void DrawRectangle(int posX, int posY, int width, int height, Color color)
//     {
//         ::DrawRectangle(posX, posY, width, height, color); // Draw a color-filled rectangle
//     }

//     void DrawRectangleV(Vector2 position, Vector2 size, Color color)
//     {
//         ::DrawRectangleV(position, size, color); // Draw a color-filled rectangle (Vector version)
//     }

//     void DrawRectangleRec(Rectangle rec, Color color)
//     {
//         ::DrawRectangleRec(rec, color); // Draw a color-filled rectangle
//     }

//     void DrawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)
//     {
//         ::DrawRectanglePro(rec, origin, rotation, color); // Draw a color-filled rectangle with pro parameters
//     }

//     void DrawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2)
//     {
//         ::DrawRectangleGradientV(posX, posY, width, height, color1, color2); // Draw a vertical-gradient-filled rectangle
//     }

//     void DrawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2)
//     {
//         ::DrawRectangleGradientH(posX, posY, width, height, color1, color2); // Draw a horizontal-gradient-filled rectangle
//     }

//     void DrawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4)
//     {
//         ::DrawRectangleGradientEx(rec, col1, col2, col3, col4); // Draw a gradient-filled rectangle with custom vertex colors
//     }

//     void DrawRectangleLines(int posX, int posY, int width, int height, Color color)
//     {
//         ::DrawRectangleLines(posX, posY, width, height, color); // Draw rectangle outline
//     }

//     void DrawRectangleLinesEx(Rectangle rec, float lineThick, Color color)
//     {
//         ::DrawRectangleLinesEx(rec, lineThick, color); // Draw rectangle outline with extended parameters
//     }

//     void DrawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)
//     {
//         ::DrawRectangleRounded(rec, roundness, segments, color); // Draw rectangle with rounded edges
//     }

//     void DrawRectangleRoundedLines(Rectangle rec, float roundness, int segments, float lineThick, Color color)
//     {
//         ::DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color); // Draw rectangle with rounded edges outline
//     }

//     void DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
//     {
//         ::DrawTriangle(v1, v2, v3, color); // Draw a color-filled triangle (vertex in counter-clockwise order!)
//     }

//     void DrawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
//     {
//         ::DrawTriangleLines(v1, v2, v3, color); // Draw triangle outline (vertex in counter-clockwise order!)
//     }

//     void DrawTriangleFan(Vector2 *points, int pointCount, Color color)
//     {
//         ::DrawTriangleFan(points, pointCount, color); // Draw a triangle fan defined by points (first vertex is the center)
//     }

//     void DrawTriangleStrip(Vector2 *points, int pointCount, Color color)
//     {
//         ::DrawTriangleStrip(points, pointCount, color); // Draw a triangle strip defined by points
//     }

//     void DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color)
//     {
//         ::DrawPoly(center, sides, radius, rotation, color); // Draw a regular polygon (Vector version)
//     }

//     void DrawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)
//     {
//         ::DrawPolyLines(center, sides, radius, rotation, color); // Draw a polygon outline of n sides
//     }

//     void DrawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color)
//     {
//         ::DrawPolyLinesEx(center, sides, radius, rotation, lineThick, color); // Draw a polygon outline of n sides with extended parameters
//     }

//     void DrawSplineLinear(Vector2 *points, int pointCount, float thick, Color color)
//     {
//         ::DrawSplineLinear(points, pointCount, thick, color); // Draw spline: Linear, minimum 2 points
//     }

//     void DrawSplineBasis(Vector2 *points, int pointCount, float thick, Color color)
//     {
//         ::DrawSplineBasis(points, pointCount, thick, color); // Draw spline: B-Spline, minimum 4 points
//     }

//     void DrawSplineCatmullRom(Vector2 *points, int pointCount, float thick, Color color)
//     {
//         ::DrawSplineCatmullRom(points, pointCount, thick, color); // Draw spline: Catmull-Rom, minimum 4 points
//     }

//     void DrawSplineBezierQuadratic(Vector2 *points, int pointCount, float thick, Color color)
//     {
//         ::DrawSplineBezierQuadratic(points, pointCount, thick, color); // Draw spline: Quadratic Bezier, minimum 3 points (1 control point): [p1, c2, p3, c4...]
//     }

//     void DrawSplineBezierCubic(Vector2 *points, int pointCount, float thick, Color color)
//     {
//         ::DrawSplineBezierCubic(points, pointCount, thick, color); // Draw spline: Cubic Bezier, minimum 4 points (2 control points): [p1, c2, c3, p4, c5, c6...]
//     }

//     void DrawSplineSegmentLinear(Vector2 p1, Vector2 p2, float thick, Color color)
//     {
//         ::DrawSplineSegmentLinear(p1, p2, thick, color); // Draw spline segment: Linear, 2 points
//     }

//     void DrawSplineSegmentBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)
//     {
//         ::DrawSplineSegmentBasis(p1, p2, p3, p4, thick, color); // Draw spline segment: B-Spline, 4 points
//     }

//     void DrawSplineSegmentCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)
//     {
//         ::DrawSplineSegmentCatmullRom(p1, p2, p3, p4, thick, color); // Draw spline segment: Catmull-Rom, 4 points
//     }

//     void DrawSplineSegmentBezierQuadratic(Vector2 p1, Vector2 c2, Vector2 p3, float thick, Color color)
//     {
//         ::DrawSplineSegmentBezierQuadratic(p1, c2, p3, thick, color); // Draw spline segment: Quadratic Bezier, 2 points, 1 control point
//     }

//     void DrawSplineSegmentBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float thick, Color color)
//     {
//         ::DrawSplineSegmentBezierCubic(p1, c2, c3, p4, thick, color); // Draw spline segment: Cubic Bezier, 2 points, 2 control points
//     }

//     Vector2 GetSplinePointLinear(Vector2 startPos, Vector2 endPos, float t)
//     {
//         return ::GetSplinePointLinear(startPos, endPos, t); // Get (evaluate) spline point: Linear
//     }

//     Vector2 GetSplinePointBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)
//     {
//         return ::GetSplinePointBasis(p1, p2, p3, p4, t); // Get (evaluate) spline point: B-Spline
//     }

//     Vector2 GetSplinePointCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)
//     {
//         return ::GetSplinePointCatmullRom(p1, p2, p3, p4, t); // Get (evaluate) spline point: Catmull-Rom
//     }

//     Vector2 GetSplinePointBezierQuad(Vector2 p1, Vector2 c2, Vector2 p3, float t)
//     {
//         return ::GetSplinePointBezierQuad(p1, c2, p3, t); // Get (evaluate) spline point: Quadratic Bezier
//     }

//     Vector2 GetSplinePointBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float t)
//     {
//         return ::GetSplinePointBezierCubic(p1, c2, c3, p4, t); // Get (evaluate) spline point: Cubic Bezier
//     }

//     bool CheckCollisionRecs(Rectangle rec1, Rectangle rec2)
//     {
//         return ::CheckCollisionRecs(rec1, rec2); // Check collision between two rectangles
//     }

//     bool CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)
//     {
//         return ::CheckCollisionCircles(center1, radius1, center2, radius2); // Check collision between two circles
//     }

//     bool CheckCollisionCircleRec(Vector2 center, float radius, Rectangle rec)
//     {
//         return ::CheckCollisionCircleRec(center, radius, rec); // Check collision between circle and rectangle
//     }

//     bool CheckCollisionPointRec(Vector2 point, Rectangle rec)
//     {
//         return ::CheckCollisionPointRec(point, rec); // Check if point is inside rectangle
//     }

//     bool CheckCollisionPointCircle(Vector2 point, Vector2 center, float radius)
//     {
//         return ::CheckCollisionPointCircle(point, center, radius); // Check if point is inside circle
//     }

//     bool CheckCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)
//     {
//         return ::CheckCollisionPointTriangle(point, p1, p2, p3); // Check if point is inside a triangle
//     }

//     bool CheckCollisionPointPoly(Vector2 point, Vector2 *points, int pointCount)
//     {
//         return ::CheckCollisionPointPoly(point, points, pointCount); // Check if point is within a polygon described by array of vertices
//     }

//     bool CheckCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint)
//     {
//         return ::CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint); // Check the collision between two lines defined by two points each, returns collision point by reference
//     }

//     bool CheckCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold)
//     {
//         return ::CheckCollisionPointLine(point, p1, p2, threshold); // Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
//     }

//     Rectangle GetCollisionRec(Rectangle rec1, Rectangle rec2)
//     {
//         return ::GetCollisionRec(rec1, rec2); // Get collision rectangle for two rectangles collision
//     }

//     //------------------------------------------------------------------------------------rtextures------------------------------------------------------------------------------------

//     // Image loading functions
//     // NOTE: These functions do not require GPU access

//     Image LoadImage(const char *fileName)
//     {
//         return ::LoadImage(fileName); // Load image from file into CPU memory (RAM)
//     }

//     Image LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize)
//     {
//         return ::LoadImageRaw(fileName, width, height, format, headerSize); // Load image from RAW file data
//     }

//     Image LoadImageSvg(const char *fileNameOrString, int width, int height)
//     {
//         return ::LoadImageSvg(fileNameOrString, width, height); // Load image from SVG file data or string with specified size
//     }

//     Image LoadImageAnim(const char *fileName, int *frames)
//     {
//         return ::LoadImageAnim(fileName, frames); // Load image sequence from file (frames appended to image.data)
//     }

//     Image LoadImageFromMemory(const char *fileType, const unsigned char *fileData, int dataSize)
//     {
//         return ::LoadImageFromMemory(fileType, fileData, dataSize); // Load image from memory buffer, fileType refers to extension: i.e. '.png'
//     }

//     Image LoadImageFromTexture(Texture2D texture)
//     {
//         return ::LoadImageFromTexture(texture); // Load image from GPU texture data
//     }

//     Image LoadImageFromScreen(void)
//     {
//         return ::LoadImageFromScreen(); // Load image from screen buffer and (screenshot)
//     }

//     bool IsImageReady(Image image)
//     {
//         return ::IsImageReady(image); // Check if an image is ready
//     }

//     void UnloadImage(Image image)
//     {
//         ::UnloadImage(image); // Unload image from CPU memory (RAM)
//     }

//     bool ExportImage(Image image, const char *fileName)
//     {
//         return ::ExportImage(image, fileName); // Export image data to file, returns true on success
//     }

//     unsigned char *ExportImageToMemory(Image image, const char *fileType, int *fileSize)
//     {
//         return ::ExportImageToMemory(image, fileType, fileSize); // Export image to memory buffer
//     }

//     bool ExportImageAsCode(Image image, const char *fileName)
//     {
//         return ::ExportImageAsCode(image, fileName); // Export image as code file defining an array of bytes, returns true on success
//     }

//     Image GenImageColor(int width, int height, Color color)
//     {
//         return ::GenImageColor(width, height, color); // Generate image: plain color
//     }

//     Image GenImageGradientLinear(int width, int height, int direction, Color start, Color end)
//     {
//         return ::GenImageGradientLinear(width, height, direction, start, end); // Generate image: linear gradient, direction in degrees [0..360], 0=Vertical gradient
//     }

//     Image GenImageGradientRadial(int width, int height, float density, Color inner, Color outer)
//     {
//         return ::GenImageGradientRadial(width, height, density, inner, outer); // Generate image: radial gradient
//     }

//     Image GenImageGradientSquare(int width, int height, float density, Color inner, Color outer)
//     {
//         return ::GenImageGradientSquare(width, height, density, inner, outer); // Generate image: square gradient
//     }

//     Image GenImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)
//     {
//         return ::GenImageChecked(width, height, checksX, checksY, col1, col2); // Generate image: checked
//     }

//     Image GenImageWhiteNoise(int width, int height, float factor)
//     {
//         return ::GenImageWhiteNoise(width, height, factor); // Generate image: white noise
//     }

//     Image GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale)
//     {
//         return ::GenImagePerlinNoise(width, height, offsetX, offsetY, scale); // Generate image: perlin noise
//     }

//     Image GenImageCellular(int width, int height, int tileSize)
//     {
//         return ::GenImageCellular(width, height, tileSize); // Generate image: cellular algorithm, bigger tileSize means bigger cells
//     }

//     Image GenImageText(int width, int height, const char *text)
//     {
//         return ::GenImageText(width, height, text); // Generate image: grayscale image from text data
//     }

//     Image ImageCopy(Image image)
//     {
//         return ::ImageCopy(image); // Create an image duplicate (useful for transformations)
//     }

//     Image ImageFromImage(Image image, Rectangle rec)
//     {
//         return ::ImageFromImage(image, rec); // Create an image from another image piece
//     }

//     Image ImageText(const char *text, int fontSize, Color color)
//     {
//         return ::ImageText(text, fontSize, color); // Create an image from text (default font)
//     }

//     Image ImageTextEx(Font font, const char *text, float fontSize, float spacing, Color tint)
//     {
//         return ::ImageTextEx(font, text, fontSize, spacing, tint); // Create an image from text (custom sprite font)
//     }

//     void ImageFormat(Image *image, int newFormat)
//     {
//         ::ImageFormat(image, newFormat); // Convert image data to desired format
//     }

//     void ImageToPOT(Image *image, Color fill)
//     {
//         ::ImageToPOT(image, fill); // Convert image to POT (power-of-two)
//     }

//     void ImageCrop(Image *image, Rectangle crop)
//     {
//         ::ImageCrop(image, crop); // Crop an image to a defined rectangle
//     }

//     void ImageAlphaCrop(Image *image, float threshold)
//     {
//         ::ImageAlphaCrop(image, threshold); // Crop image depending on alpha value
//     }

//     void ImageAlphaClear(Image *image, Color color, float threshold)
//     {
//         ::ImageAlphaClear(image, color, threshold); // Clear alpha channel to desired color
//     }

//     void ImageAlphaMask(Image *image, Image alphaMask)
//     {
//         ::ImageAlphaMask(image, alphaMask); // Apply alpha mask to image
//     }

//     void ImageAlphaPremultiply(Image *image)
//     {
//         ::ImageAlphaPremultiply(image); // Premultiply alpha channel
//     }

//     void ImageBlurGaussian(Image *image, int blurSize)
//     {
//         ::ImageBlurGaussian(image, blurSize); // Apply Gaussian blur using a box blur approximation
//     }

//     void ImageResize(Image *image, int newWidth, int newHeight)
//     {
//         ::ImageResize(image, newWidth, newHeight); // Resize image (Bicubic scaling algorithm)
//     }

//     void ImageResizeNN(Image *image, int newWidth, int newHeight)
//     {
//         ::ImageResizeNN(image, newWidth, newHeight); // Resize image (Nearest-Neighbor scaling algorithm)
//     }

//     void ImageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)
//     {
//         ::ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill); // Resize canvas and fill with color
//     }

//     void ImageMipmaps(Image *image)
//     {
//         ::ImageMipmaps(image); // Compute all mipmap levels for a provided image
//     }

//     void ImageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp)
//     {
//         ::ImageDither(image, rBpp, gBpp, bBpp, aBpp); // Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
//     }

//     void ImageFlipVertical(Image *image)
//     {
//         ::ImageFlipVertical(image); // Flip image vertically
//     }

//     void ImageFlipHorizontal(Image *image)
//     {
//         ::ImageFlipHorizontal(image); // Flip image horizontally
//     }

//     void ImageRotate(Image *image, int degrees)
//     {
//         ::ImageRotate(image, degrees); // Rotate image by input angle in degrees (-359 to 359)
//     }

//     void ImageRotateCW(Image *image)
//     {
//         ::ImageRotateCW(image); // Rotate image clockwise 90deg
//     }

//     void ImageRotateCCW(Image *image)
//     {
//         ::ImageRotateCCW(image); // Rotate image counter-clockwise 90deg
//     }

//     void ImageColorTint(Image *image, Color color)
//     {
//         ::ImageColorTint(image, color); // Modify image color: tint
//     }

//     void ImageColorInvert(Image *image)
//     {
//         ::ImageColorInvert(image); // Modify image color: invert
//     }

//     void ImageColorGrayscale(Image *image)
//     {
//         ::ImageColorGrayscale(image); // Modify image color: grayscale
//     }

//     void ImageColorContrast(Image *image, float contrast)
//     {
//         ::ImageColorContrast(image, contrast); // Modify image color: contrast (-100 to 100)
//     }

//     void ImageColorBrightness(Image *image, int brightness)
//     {
//         ::ImageColorBrightness(image, brightness); // Modify image color: brightness (-255 to 255)
//     }

//     void ImageColorReplace(Image *image, Color color, Color replace)
//     {
//         ::ImageColorReplace(image, color, replace); // Modify image color: replace color
//     }

//     Color *LoadImageColors(Image image)
//     {
//         return ::LoadImageColors(image); // Load color data from image as a Color array (RGBA - 32bit)
//     }

//     Color *LoadImageColors(Image image)
//     {
//         return ::LoadImageColors(image); // Load color data from image as a Color array (RGBA - 32bit)
//     }

//     Color *LoadImagePalette(Image image, int maxPaletteSize, int *colorCount)
//     {
//         return ::LoadImagePalette(image, maxPaletteSize, colorCount); // Load colors palette from image as a Color array (RGBA - 32bit)
//     }

//     void UnloadImageColors(Color *colors)
//     {
//         ::UnloadImageColors(colors); // Unload color data loaded with LoadImageColors()
//     }

//     void UnloadImagePalette(Color *colors)
//     {
//         ::UnloadImagePalette(colors); // Unload colors palette loaded with LoadImagePalette()
//     }

//     Rectangle GetImageAlphaBorder(Image image, float threshold)
//     {
//         return ::GetImageAlphaBorder(image, threshold); // Get image alpha border rectangle
//     }

//     Color GetImageColor(Image image, int x, int y)
//     {
//         return ::GetImageColor(image, x, y); // Get image pixel color at (x, y) position
//     }

//     void ImageClearBackground(Image *dst, Color color)
//     {
//         ::ImageClearBackground(dst, color); // Clear image background with given color
//     }

//     void ImageDrawPixel(Image *dst, int posX, int posY, Color color)
//     {
//         ::ImageDrawPixel(dst, posX, posY, color); // Draw pixel within an image
//     }

//     void ImageDrawPixelV(Image *dst, Vector2 position, Color color)
//     {
//         ::ImageDrawPixelV(dst, position, color); // Draw pixel within an image (Vector version)
//     }

//     void ImageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)
//     {
//         ::ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color); // Draw line within an image
//     }

//     void ImageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color)
//     {
//         ::ImageDrawLineV(dst, start, end, color); // Draw line within an image (Vector version)
//     }

//     void ImageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color)
//     {
//         ::ImageDrawCircle(dst, centerX, centerY, radius, color); // Draw a filled circle within an image
//     }

//     void ImageDrawCircleV(Image *dst, Vector2 center, int radius, Color color)
//     {
//         ::ImageDrawCircleV(dst, center, radius, color); // Draw a filled circle within an image (Vector version)
//     }

//     void ImageDrawCircleLines(Image *dst, int centerX, int centerY, int radius, Color color)
//     {
//         ::ImageDrawCircleLines(dst, centerX, centerY, radius, color); // Draw circle outline within an image
//     }

//     void ImageDrawCircleLinesV(Image *dst, Vector2 center, int radius, Color color)
//     {
//         ::ImageDrawCircleLinesV(dst, center, radius, color); // Draw circle outline within an image (Vector version)
//     }

//     void ImageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color)
//     {
//         ::ImageDrawRectangle(dst, posX, posY, width, height, color); // Draw rectangle within an image
//     }

//     void ImageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color)
//     {
//         ::ImageDrawRectangleV(dst, position, size, color); // Draw rectangle within an image (Vector version)
//     }

//     void ImageDrawRectangleRec(Image *dst, Rectangle rec, Color color)
//     {
//         ::ImageDrawRectangleRec(dst, rec, color); // Draw rectangle within an image
//     }

//     void ImageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color)
//     {
//         ::ImageDrawRectangleLines(dst, rec, thick, color); // Draw rectangle lines within an image
//     }

//     void ImageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)
//     {
//         ::ImageDraw(dst, src, srcRec, dstRec, tint); // Draw a source image within a destination image (tint applied to source)
//     }

//     void ImageDrawText(Image *dst, const char *text, int posX, int posY, int fontSize, Color color)
//     {
//         ::ImageDrawText(dst, text, posX, posY, fontSize, color); // Draw text (using default font) within an image (destination)
//     }

//     void ImageDrawTextEx(Image *dst, Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint)
//     {
//         ::ImageDrawTextEx(dst, font, text, position, fontSize, spacing, tint); // Draw text (custom sprite font) within an image (destination)
//     }

//     Texture2D LoadTexture(const char *fileName)
//     {
//         return ::LoadTexture(fileName); // Load texture from file into GPU memory (VRAM)
//     }

//     Texture2D LoadTextureFromImage(Image image)
//     {
//         return ::LoadTextureFromImage(image); // Load texture from image data
//     }

//     TextureCubemap LoadTextureCubemap(Image image, int layout)
//     {
//         return ::LoadTextureCubemap(image, layout); // Load cubemap from image, multiple image cubemap layouts supported
//     }

//     RenderTexture2D LoadRenderTexture(int width, int height)
//     {
//         return ::LoadRenderTexture(width, height); // Load texture for rendering (framebuffer)
//     }

//     bool IsTextureReady(Texture2D texture)
//     {
//         return ::IsTextureReady(texture); // Check if a texture is ready
//     }

//     void UnloadTexture(Texture2D texture)
//     {
//         ::UnloadTexture(texture); // Unload texture from GPU memory (VRAM)
//     }

//     bool IsRenderTextureReady(RenderTexture2D target)
//     {
//         return ::IsRenderTextureReady(target); // Check if a render texture is ready
//     }

//     void UnloadRenderTexture(RenderTexture2D target)
//     {
//         ::UnloadRenderTexture(target); // Unload render texture from GPU memory (VRAM)
//     }

//     void UpdateTexture(Texture2D texture, const void *pixels)
//     {
//         ::UpdateTexture(texture, pixels); // Update GPU texture with new data
//     }

//     void UpdateTextureRec(Texture2D texture, Rectangle rec, const void *pixels)
//     {
//         ::UpdateTextureRec(texture, rec, pixels); // Update GPU texture rectangle with new data
//     }

//     void GenTextureMipmaps(Texture2D *texture)
//     {
//         ::GenTextureMipmaps(texture); // Generate GPU mipmaps for a texture
//     }

//     void SetTextureFilter(Texture2D texture, int filter)
//     {
//         ::SetTextureFilter(texture, filter); // Set texture scaling filter mode
//     }

//     void SetTextureWrap(Texture2D texture, int wrap)
//     {
//         ::SetTextureWrap(texture, wrap); // Set texture wrapping mode
//     }

//     void DrawTexture(Texture2D texture, int posX, int posY, Color tint)
//     {
//         ::DrawTexture(texture, posX, posY, tint); // Draw a Texture2D
//     }

//     void DrawTextureV(Texture2D texture, Vector2 position, Color tint)
//     {
//         ::DrawTextureV(texture, position, tint); // Draw a Texture2D with position defined as Vector2
//     }

//     void DrawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint)
//     {
//         ::DrawTextureEx(texture, position, rotation, scale, tint); // Draw a Texture2D with extended parameters
//     }

//     void DrawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint)
//     {
//         ::DrawTextureRec(texture, source, position, tint); // Draw a part of a texture defined by a rectangle
//     }

//     void DrawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint)
//     {
//         ::DrawTexturePro(texture, source, dest, origin, rotation, tint); // Draw a part of a texture defined by a rectangle with 'pro' parameters
//     }

//     void DrawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint)
//     {
//         ::DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint); // Draws a texture (or part of it) that stretches or shrinks nicely
//     }

//     Color Fade(Color color, float alpha)
//     {
//         return ::Fade(color, alpha); // Get color with alpha applied, alpha goes from 0.0f to 1.0f
//     }

//     int ColorToInt(Color color)
//     {
//         return ::ColorToInt(color); // Get hexadecimal value for a Color
//     }

//     Vector4 ColorNormalize(Color color)
//     {
//         return ::ColorNormalize(color); // Get Color normalized as float [0..1]
//     }

//     Color ColorFromNormalized(Vector4 normalized)
//     {
//         return ::ColorFromNormalized(normalized); // Get Color from normalized values [0..1]
//     }

//     Vector3 ColorToHSV(Color color)
//     {
//         return ::ColorToHSV(color); // Get HSV values for a Color, hue [0..360], saturation/value [0..1]
//     }

//     Color ColorFromHSV(float hue, float saturation, float value)
//     {
//         return ::ColorFromHSV(hue, saturation, value); // Get a Color from HSV values, hue [0..360], saturation/value [0..1]
//     }

//     Color ColorTint(Color color, Color tint)
//     {
//         return ::ColorTint(color, tint); // Get color multiplied with another color
//     }

//     Color ColorBrightness(Color color, float factor)
//     {
//         return ::ColorBrightness(color, factor); // Get color with brightness correction, brightness factor goes from -1.0f to 1.0f
//     }

//     Color ColorContrast(Color color, float contrast)
//     {
//         return ::ColorContrast(color, contrast); // Get color with contrast correction, contrast values between -1.0f and 1.0f
//     }

//     Color ColorAlpha(Color color, float alpha)
//     {
//         return ::ColorAlpha(color, alpha); // Get color with alpha applied, alpha goes from 0.0f to 1.0f
//     }

//     Color ColorAlphaBlend(Color dst, Color src, Color tint)
//     {
//         return ::ColorAlphaBlend(dst, src, tint); // Get src alpha-blended into dst color with tint
//     }

//     Color GetColor(unsigned int hexValue)
//     {
//         return ::GetColor(hexValue); // Get Color structure from hexadecimal value
//     }

//     Color GetPixelColor(void *srcPtr, int format)
//     {
//         return ::GetPixelColor(srcPtr, format); // Get Color from a source pixel pointer of certain format
//     }

//     void SetPixelColor(void *dstPtr, Color color, int format)
//     {
//         ::SetPixelColor(dstPtr, color, format); // Set color formatted into destination pixel pointer
//     }

//     int GetPixelDataSize(int width, int height, int format)
//     {
//         return ::GetPixelDataSize(width, height, format); // Get pixel data size in bytes for certain format
//     }

//     //----------------------------------------------------------------------------rtext----------------------------------------------------------------------------

//     Font GetFontDefault(void)
//     {
//         return ::GetFontDefault(); // Get the default Font
//     }

//     Font LoadFont(const char *fileName)
//     {
//         return ::LoadFont(fileName); // Load font from file into GPU memory (VRAM)
//     }

//     Font LoadFontEx(const char *fileName, int fontSize, int *codepoints, int codepointCount)
//     {
//         return ::LoadFontEx(fileName, fontSize, codepoints, codepointCount); // Load font from file with extended parameters, use NULL for codepoints and 0 for codepointCount to load the default character set
//     }

//     Font LoadFontFromImage(Image image, Color key, int firstChar)
//     {
//         return ::LoadFontFromImage(image, key, firstChar); // Load font from Image (XNA style)
//     }

//     Font LoadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount)
//     {
//         return ::LoadFontFromMemory(fileType, fileData, dataSize, fontSize, codepoints, codepointCount); // Load font from memory buffer, fileType refers to extension: i.e. '.ttf'
//     }

//     bool IsFontReady(Font font)
//     {
//         return ::IsFontReady(font); // Check if a font is ready
//     }

//     GlyphInfo *LoadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount, int type)
//     {
//         return ::LoadFontData(fileData, dataSize, fontSize, codepoints, codepointCount, type); // Load font data for further use
//     }

//     Image GenImageFontAtlas(const GlyphInfo *glyphs, Rectangle **glyphRecs, int glyphCount, int fontSize, int padding, int packMethod)
//     {
//         return ::GenImageFontAtlas(glyphs, glyphRecs, glyphCount, fontSize, padding, packMethod); // Generate image font atlas using chars info
//     }

//     void UnloadFontData(GlyphInfo *glyphs, int glyphCount)
//     {
//         ::UnloadFontData(glyphs, glyphCount); // Unload font chars info data (RAM)
//     }

//     void UnloadFont(Font font)
//     {
//         ::UnloadFont(font); // Unload font from GPU memory (VRAM)
//     }

//     bool ExportFontAsCode(Font font, const char *fileName)
//     {
//         return ::ExportFontAsCode(font, fileName); // Export font as code file, returns true on success
//     }

//     void DrawFPS(int posX, int posY)
//     {
//         ::DrawFPS(posX, posY); // Draw current FPS
//     }

//     void DrawText(const char *text, int posX, int posY, int fontSize, Color color)
//     {
//         ::DrawText(text, posX, posY, fontSize, color); // Draw text (using default font)
//     }

//     void DrawTextEx(Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint)
//     {
//         ::DrawTextEx(font, text, position, fontSize, spacing, tint); // Draw text using font and additional parameters
//     }

//     void DrawTextPro(Font font, const char *text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint)
//     {
//         ::DrawTextPro(font, text, position, origin, rotation, fontSize, spacing, tint); // Draw text using Font and pro parameters (rotation)
//     }

//     void DrawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)
//     {
//         ::DrawTextCodepoint(font, codepoint, position, fontSize, tint); // Draw one character (codepoint)
//     }

//     void DrawTextCodepoints(Font font, const int *codepoints, int codepointCount, Vector2 position, float fontSize, float spacing, Color tint)
//     {
//         ::DrawTextCodepoints(font, codepoints, codepointCount, position, fontSize, spacing, tint); // Draw multiple character (codepoint)
//     }

//     void SetTextLineSpacing(int spacing)
//     {
//         ::SetTextLineSpacing(spacing); // Set vertical line spacing when drawing with line-breaks
//     }

//     int MeasureText(const char *text, int fontSize)
//     {
//         return ::MeasureText(text, fontSize); // Measure string width for default font
//     }

//     Vector2 MeasureTextEx(Font font, const char *text, float fontSize, float spacing)
//     {
//         return ::MeasureTextEx(font, text, fontSize, spacing); // Measure string size for Font
//     }

//     int GetGlyphIndex(Font font, int codepoint)
//     {
//         return ::GetGlyphIndex(font, codepoint); // Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found
//     }

//     GlyphInfo GetGlyphInfo(Font font, int codepoint)
//     {
//         return ::GetGlyphInfo(font, codepoint); // Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found
//     }

//     Rectangle GetGlyphAtlasRec(Font font, int codepoint)
//     {
//         return ::GetGlyphAtlasRec(font, codepoint); // Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found
//     }

//     char *LoadUTF8(const int *codepoints, int length)
//     {
//         return ::LoadUTF8(codepoints, length); // Load UTF-8 text encoded from codepoints array
//     }

//     void UnloadUTF8(char *text)
//     {
//         ::UnloadUTF8(text); // Unload UTF-8 text encoded from codepoints array
//     }

//     int *LoadCodepoints(const char *text, int *count)
//     {
//         return ::LoadCodepoints(text, count); // Load all codepoints from a UTF-8 text string, codepoints count returned by parameter
//     }

//     void UnloadCodepoints(int *codepoints)
//     {
//         ::UnloadCodepoints(codepoints); // Unload codepoints data from memory
//     }

//     int GetCodepointCount(const char *text)
//     {
//         return ::GetCodepointCount(text); // Get total number of codepoints in a UTF-8 encoded string
//     }

//     int GetCodepoint(const char *text, int *codepointSize)
//     {
//         return ::GetCodepoint(text, codepointSize); // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
//     }

//     int GetCodepointNext(const char *text, int *codepointSize)
//     {
//         return ::GetCodepointNext(text, codepointSize); // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
//     }

//     int GetCodepointPrevious(const char *text, int *codepointSize)
//     {
//         return ::GetCodepointPrevious(text, codepointSize); // Get previous codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
//     }

//     const char *CodepointToUTF8(int codepoint, int *utf8Size)
//     {
//         return ::CodepointToUTF8(codepoint, utf8Size); // Encode one codepoint into UTF-8 byte array (array length returned as parameter)
//     }

//     int TextCopy(char *dst, const char *src)
//     {
//         return ::TextCopy(dst, src); // Copy one string to another, returns bytes copied
//     }

//     bool TextIsEqual(const char *text1, const char *text2)
//     {
//         return ::TextIsEqual(text1, text2); // Check if two text strings are equal
//     }

//     unsigned int TextLength(const char *text)
//     {
//         return ::TextLength(text); // Get text length, checks for '\0' ending
//     }

//     const char *TextFormat(const char *text, ...)
//     {
//         va_list args;
//         va_start(args, text);
//         const char *formattedText = ::TextFormat(text, args); // Text formatting with variables (sprintf() style)
//         va_end(args);
//         return formattedText;
//     }

//     const char *TextSubtext(const char *text, int position, int length)
//     {
//         return ::TextSubtext(text, position, length); // Get a piece of a text string
//     }

//     char *TextReplace(char *text, const char *replace, const char *by)
//     {
//         return ::TextReplace(text, replace, by); // Replace text string (WARNING: memory must be freed!)
//     }

//     char *TextInsert(const char *text, const char *insert, int position)
//     {
//         return ::TextInsert(text, insert, position); // Insert text in a position (WARNING: memory must be freed!)
//     }

//     const char *TextJoin(const char **textList, int count, const char *delimiter)
//     {
//         return ::TextJoin(textList, count, delimiter); // Join text strings with delimiter
//     }

//     const char **TextSplit(const char *text, char delimiter, int *count)
//     {
//         return ::TextSplit(text, delimiter, count); // Split text into multiple strings
//     }

//     void TextAppend(char *text, const char *append, int *position)
//     {
//         ::TextAppend(text, append, position); // Append text at specific position and move cursor!
//     }

//     int TextFindIndex(const char *text, const char *find)
//     {
//         return ::TextFindIndex(text, find); // Find first text occurrence within a string
//     }

//     const char *TextToUpper(const char *text)
//     {
//         return ::TextToUpper(text); // Get upper case version of provided string
//     }

//     const char *TextToLower(const char *text)
//     {
//         return ::TextToLower(text); // Get lower case version of provided string
//     }

//     const char *TextToPascal(const char *text)
//     {
//         return ::TextToPascal(text); // Get Pascal case notation version of provided string
//     }

//     int TextToInteger(const char *text)
//     {
//         return ::TextToInteger(text); // Get integer value from text (negative values not supported)
//     }

//     // ------------------------------------------------------------------------------------rmodels------------------------------------------------------------------------------------

//     void DrawLine3D(Vector3 startPos, Vector3 endPos, Color color)
//     {
//         ::DrawLine3D(startPos, endPos, color); // Draw a line in 3D world space
//     }

//     void DrawPoint3D(Vector3 position, Color color)
//     {
//         ::DrawPoint3D(position, color); // Draw a point in 3D space, actually a small line
//     }

//     void DrawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)
//     {
//         ::DrawCircle3D(center, radius, rotationAxis, rotationAngle, color); // Draw a circle in 3D world space
//     }

//     void DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)
//     {
//         ::DrawTriangle3D(v1, v2, v3, color); // Draw a color-filled triangle (vertex in counter-clockwise order!)
//     }

//     void DrawTriangleStrip3D(Vector3 *points, int pointCount, Color color)
//     {
//         ::DrawTriangleStrip3D(points, pointCount, color); // Draw a triangle strip defined by points
//     }

//     void DrawCube(Vector3 position, float width, float height, float length, Color color)
//     {
//         ::DrawCube(position, width, height, length, color); // Draw cube
//     }

//     void DrawCubeV(Vector3 position, Vector3 size, Color color)
//     {
//         ::DrawCubeV(position, size, color); // Draw cube (Vector version)
//     }

//     void DrawCubeWires(Vector3 position, float width, float height, float length, Color color)
//     {
//         ::DrawCubeWires(position, width, height, length, color); // Draw cube wires
//     }

//     void DrawCubeWiresV(Vector3 position, Vector3 size, Color color)
//     {
//         ::DrawCubeWiresV(position, size, color); // Draw cube wires (Vector version)
//     }

//     void DrawSphere(Vector3 centerPos, float radius, Color color)
//     {
//         ::DrawSphere(centerPos, radius, color); // Draw sphere
//     }

//     void DrawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)
//     {
//         ::DrawSphereEx(centerPos, radius, rings, slices, color); // Draw sphere with extended parameters
//     }

//     void DrawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)
//     {
//         ::DrawSphereWires(centerPos, radius, rings, slices, color); // Draw sphere wires
//     }

//     void DrawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
//     {
//         ::DrawCylinder(position, radiusTop, radiusBottom, height, slices, color); // Draw a cylinder/cone
//     }

//     void DrawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
//     {
//         ::DrawCylinderEx(startPos, endPos, startRadius, endRadius, sides, color); // Draw a cylinder with base at startPos and top at endPos
//     }

//     void DrawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
//     {
//         ::DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color); // Draw a cylinder/cone wires
//     }

//     void DrawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
//     {
//         ::DrawCylinderWiresEx(startPos, endPos, startRadius, endRadius, sides, color); // Draw a cylinder wires with base at startPos and top at endPos
//     }

//     void DrawCapsule(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)
//     {
//         ::DrawCapsule(startPos, endPos, radius, slices, rings, color); // Draw a capsule with the center of its sphere caps at startPos and endPos
//     }

//     void DrawCapsuleWires(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)
//     {
//         ::DrawCapsuleWires(startPos, endPos, radius, slices, rings, color); // Draw capsule wireframe with the center of its sphere caps at startPos and endPos
//     }

//     void DrawPlane(Vector3 centerPos, Vector2 size, Color color)
//     {
//         ::DrawPlane(centerPos, size, color); // Draw a plane XZ
//     }

//     void DrawRay(Ray ray, Color color)
//     {
//         ::DrawRay(ray, color); // Draw a ray line
//     }

//     void DrawGrid(int slices, float spacing)
//     {
//         ::DrawGrid(slices, spacing); // Draw a grid (centered at (0, 0, 0))
//     }

//     Model LoadModel(const char *fileName)
//     {
//         return ::LoadModel(fileName); // Load model from files (meshes and materials)
//     }

//     Model LoadModelFromMesh(Mesh mesh)
//     {
//         return ::LoadModelFromMesh(mesh); // Load model from generated mesh (default material)
//     }

//     bool IsModelReady(Model model)
//     {
//         return ::IsModelReady(model); // Check if a model is ready
//     }

//     void UnloadModel(Model model)
//     {
//         ::UnloadModel(model); // Unload model (including meshes) from memory (RAM and/or VRAM)
//     }

//     BoundingBox GetModelBoundingBox(Model model)
//     {
//         return ::GetModelBoundingBox(model); // Compute model bounding box limits (considers all meshes)
//     }

//     void DrawModel(Model model, Vector3 position, float scale, Color tint)
//     {
//         ::DrawModel(model, position, scale, tint); // Draw a model (with texture if set)
//     }

//     void DrawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
//     {
//         ::DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint); // Draw a model with extended parameters
//     }

//     void DrawModelWires(Model model, Vector3 position, float scale, Color tint)
//     {
//         ::DrawModelWires(model, position, scale, tint); // Draw a model wires (with texture if set)
//     }

//     void DrawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
//     {
//         ::DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint); // Draw a model wires (with texture if set) with extended parameters
//     }

//     void DrawBoundingBox(BoundingBox box, Color color)
//     {
//         ::DrawBoundingBox(box, color); // Draw bounding box (wires)
//     }

//     void DrawBillboard(Camera camera, Texture2D texture, Vector3 position, float size, Color tint)
//     {
//         ::DrawBillboard(camera, texture, position, size, tint); // Draw a billboard texture
//     }

//     void DrawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint)
//     {
//         ::DrawBillboardRec(camera, texture, source, position, size, tint); // Draw a billboard texture defined by source
//     }

//     void DrawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint)
//     {
//         ::DrawBillboardPro(camera, texture, source, position, up, size, origin, rotation, tint); // Draw a billboard texture defined by source and rotation
//     }

//     void UploadMesh(Mesh *mesh, bool dynamic)
//     {
//         ::UploadMesh(mesh, dynamic); // Upload mesh vertex data in GPU and provide VAO/VBO ids
//     }

//     void UpdateMeshBuffer(Mesh mesh, int index, const void *data, int dataSize, int offset)
//     {
//         ::UpdateMeshBuffer(mesh, index, data, dataSize, offset); // Update mesh vertex data in GPU for a specific buffer index
//     }

//     void UnloadMesh(Mesh mesh)
//     {
//         ::UnloadMesh(mesh); // Unload mesh data from CPU and GPU
//     }

//     void DrawMesh(Mesh mesh, Material material, Matrix transform)
//     {
//         ::DrawMesh(mesh, material, transform); // Draw a 3d mesh with material and transform
//     }

//     void DrawMeshInstanced(Mesh mesh, Material material, const Matrix *transforms, int instances)
//     {
//         ::DrawMeshInstanced(mesh, material, transforms, instances); // Draw multiple mesh instances with material and different transforms
//     }

//     bool ExportMesh(Mesh mesh, const char *fileName)
//     {
//         return ::ExportMesh(mesh, fileName); // Export mesh data to file, returns true on success
//     }

//     BoundingBox GetMeshBoundingBox(Mesh mesh)
//     {
//         return ::GetMeshBoundingBox(mesh); // Compute mesh bounding box limits
//     }

//     void GenMeshTangents(Mesh *mesh)
//     {
//         ::GenMeshTangents(mesh); // Compute mesh tangents
//     }

//     Mesh GenMeshPoly(int sides, float radius)
//     {
//         return ::GenMeshPoly(sides, radius); // Generate polygonal mesh
//     }

//     Mesh GenMeshPlane(float width, float length, int resX, int resZ)
//     {
//         return ::GenMeshPlane(width, length, resX, resZ); // Generate plane mesh (with subdivisions)
//     }

//     Mesh GenMeshCube(float width, float height, float length)
//     {
//         return ::GenMeshCube(width, height, length); // Generate cuboid mesh
//     }

//     Mesh GenMeshSphere(float radius, int rings, int slices)
//     {
//         return ::GenMeshSphere(radius, rings, slices); // Generate sphere mesh (standard sphere)
//     }

//     Mesh GenMeshHemiSphere(float radius, int rings, int slices)
//     {
//         return ::GenMeshHemiSphere(radius, rings, slices); // Generate half-sphere mesh (no bottom cap)
//     }

//     Mesh GenMeshCylinder(float radius, float height, int slices)
//     {
//         return ::GenMeshCylinder(radius, height, slices); // Generate cylinder mesh
//     }

//     Mesh GenMeshCone(float radius, float height, int slices)
//     {
//         return ::GenMeshCone(radius, height, slices); // Generate cone/pyramid mesh
//     }

//     Mesh GenMeshTorus(float radius, float size, int radSeg, int sides)
//     {
//         return ::GenMeshTorus(radius, size, radSeg, sides); // Generate torus mesh
//     }

//     Mesh GenMeshKnot(float radius, float size, int radSeg, int sides)
//     {
//         return ::GenMeshKnot(radius, size, radSeg, sides); // Generate trefoil knot mesh
//     }

//     Mesh GenMeshHeightmap(Image heightmap, Vector3 size)
//     {
//         return ::GenMeshHeightmap(heightmap, size); // Generate heightmap mesh from image data
//     }

//     Mesh GenMeshCubicmap(Image cubicmap, Vector3 cubeSize)
//     {
//         return ::GenMeshCubicmap(cubicmap, cubeSize); // Generate cubes-based map mesh from image data
//     }

//     Material *LoadMaterials(const char *fileName, int *materialCount)
//     {
//         return ::LoadMaterials(fileName, materialCount); // Load materials from model file
//     }

//     Material LoadMaterialDefault(void)
//     {
//         return ::LoadMaterialDefault(); // Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
//     }

//     bool IsMaterialReady(Material material)
//     {
//         return ::IsMaterialReady(material); // Check if a material is ready
//     }

//     void UnloadMaterial(Material material)
//     {
//         ::UnloadMaterial(material); // Unload material from GPU memory (VRAM)
//     }

//     void SetMaterialTexture(Material *material, int mapType, Texture2D texture)
//     {
//         ::SetMaterialTexture(material, mapType, texture); // Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
//     }

//     void SetModelMeshMaterial(Model *model, int meshId, int materialId)
//     {
//         ::SetModelMeshMaterial(model, meshId, materialId); // Set material for a mesh
//     }

//     ModelAnimation *LoadModelAnimations(const char *fileName, int *animCount)
//     {
//         return ::LoadModelAnimations(fileName, animCount); // Load model animations from file
//     }

//     void UpdateModelAnimation(Model model, ModelAnimation anim, int frame)
//     {
//         ::UpdateModelAnimation(model, anim, frame); // Update model animation pose
//     }

//     void UnloadModelAnimation(ModelAnimation anim)
//     {
//         ::UnloadModelAnimation(anim); // Unload animation data
//     }

//     void UnloadModelAnimations(ModelAnimation *animations, int animCount)
//     {
//         ::UnloadModelAnimations(animations, animCount); // Unload animation array data
//     }

//     bool IsModelAnimationValid(Model model, ModelAnimation anim)
//     {
//         return ::IsModelAnimationValid(model, anim); // Check model animation skeleton match
//     }

//     bool CheckCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)
//     {
//         return ::CheckCollisionSpheres(center1, radius1, center2, radius2); // Check collision between two spheres
//     }

//     bool CheckCollisionBoxes(BoundingBox box1, BoundingBox box2)
//     {
//         return ::CheckCollisionBoxes(box1, box2); // Check collision between two bounding boxes
//     }

//     bool CheckCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)
//     {
//         return ::CheckCollisionBoxSphere(box, center, radius); // Check collision between box and sphere
//     }

//     RayCollision GetRayCollisionSphere(Ray ray, Vector3 center, float radius)
//     {
//         return ::GetRayCollisionSphere(ray, center, radius); // Get collision info between ray and sphere
//     }

//     RayCollision GetRayCollisionBox(Ray ray, BoundingBox box)
//     {
//         return ::GetRayCollisionBox(ray, box); // Get collision info between ray and box
//     }

//     RayCollision GetRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform)
//     {
//         return ::GetRayCollisionMesh(ray, mesh, transform); // Get collision info between ray and mesh
//     }

//     RayCollision GetRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)
//     {
//         return ::GetRayCollisionTriangle(ray, p1, p2, p3); // Get collision info between ray and triangle
//     }

//     RayCollision GetRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)
//     {
//         return ::GetRayCollisionQuad(ray, p1, p2, p3, p4); // Get collision info between ray and quad
//     }

//     // ----------------------------------------------------------------------------------raudio----------------------------------------------------------------------------------

//     void InitAudioDevice(void)
//     {
//         ::InitAudioDevice(); // Initialize audio device and context
//     }

//     void CloseAudioDevice(void)
//     {
//         ::CloseAudioDevice(); // Close the audio device and context
//     }

//     bool IsAudioDeviceReady(void)
//     {
//         return ::IsAudioDeviceReady(); // Check if audio device has been initialized successfully
//     }

//     void SetMasterVolume(float volume)
//     {
//         ::SetMasterVolume(volume); // Set master volume (listener)
//     }

//     float GetMasterVolume(void)
//     {
//         return ::GetMasterVolume(); // Get master volume (listener)
//     }

//     Wave LoadWave(const char *fileName)
//     {
//         return ::LoadWave(fileName); // Load wave data from file
//     }

//     Wave LoadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize)
//     {
//         return ::LoadWaveFromMemory(fileType, fileData, dataSize); // Load wave from memory buffer, fileType refers to extension: i.e. '.wav'
//     }

//     bool IsWaveReady(Wave wave)
//     {
//         return ::IsWaveReady(wave); // Checks if wave data is ready
//     }

//     Sound LoadSound(const char *fileName)
//     {
//         return ::LoadSound(fileName); // Load sound from file
//     }

//     Sound LoadSoundFromWave(Wave wave)
//     {
//         return ::LoadSoundFromWave(wave); // Load sound from wave data
//     }

//     Sound LoadSoundAlias(Sound source)
//     {
//         return ::LoadSoundAlias(source); // Create a new sound that shares the same sample data as the source sound, does not own the sound data
//     }

//     bool IsSoundReady(Sound sound)
//     {
//         return ::IsSoundReady(sound); // Checks if a sound is ready
//     }

//     void UpdateSound(Sound sound, const void *data, int sampleCount)
//     {
//         ::UpdateSound(sound, data, sampleCount); // Update sound buffer with new data
//     }

//     void UnloadWave(Wave wave)
//     {
//         ::UnloadWave(wave); // Unload wave data
//     }

//     void UnloadSound(Sound sound)
//     {
//         ::UnloadSound(sound); // Unload sound
//     }

//     void UnloadSoundAlias(Sound alias)
//     {
//         ::UnloadSoundAlias(alias); // Unload a sound alias (does not deallocate sample data)
//     }

//     bool ExportWave(Wave wave, const char *fileName)
//     {
//         return ::ExportWave(wave, fileName); // Export wave data to file, returns true on success
//     }

//     bool ExportWaveAsCode(Wave wave, const char *fileName)
//     {
//         return ::ExportWaveAsCode(wave, fileName); // Export wave sample data to code (.h), returns true on success
//     }

//     void PlaySound(Sound sound)
//     {
//         ::PlaySound(sound); // Play a sound
//     }

//     void StopSound(Sound sound)
//     {
//         ::StopSound(sound); // Stop playing a sound
//     }

//     void PauseSound(Sound sound)
//     {
//         ::PauseSound(sound); // Pause a sound
//     }

//     void ResumeSound(Sound sound)
//     {
//         ::ResumeSound(sound); // Resume a paused sound
//     }

//     bool IsSoundPlaying(Sound sound)
//     {
//         return ::IsSoundPlaying(sound); // Check if a sound is currently playing
//     }

//     void SetSoundVolume(Sound sound, float volume)
//     {
//         ::SetSoundVolume(sound, volume); // Set volume for a sound (1.0 is max level)
//     }

//     void SetSoundPitch(Sound sound, float pitch)
//     {
//         ::SetSoundPitch(sound, pitch); // Set pitch for a sound (1.0 is base level)
//     }

//     void SetSoundPan(Sound sound, float pan)
//     {
//         ::SetSoundPan(sound, pan); // Set pan for a sound (0.5 is center)
//     }

//     Wave WaveCopy(Wave wave)
//     {
//         return ::WaveCopy(wave); // Copy a wave to a new wave
//     }

//     void WaveCrop(Wave *wave, int initSample, int finalSample)
//     {
//         ::WaveCrop(wave, initSample, finalSample); // Crop a wave to defined samples range
//     }

//     void WaveFormat(Wave *wave, int sampleRate, int sampleSize, int channels)
//     {
//         ::WaveFormat(wave, sampleRate, sampleSize, channels); // Convert wave data to desired format
//     }

//     float *LoadWaveSamples(Wave wave)
//     {
//         return ::LoadWaveSamples(wave); // Load samples data from wave as a 32bit float data array
//     }

//     void UnloadWaveSamples(float *samples)
//     {
//         ::UnloadWaveSamples(samples); // Unload samples data loaded with LoadWaveSamples()
//     }

//     Music LoadMusicStream(const char *fileName)
//     {
//         return ::LoadMusicStream(fileName); // Load music stream from file
//     }

//     Music LoadMusicStreamFromMemory(const char *fileType, const unsigned char *data, int dataSize)
//     {
//         return ::LoadMusicStreamFromMemory(fileType, data, dataSize); // Load music stream from data
//     }

//     bool IsMusicReady(Music music)
//     {
//         return ::IsMusicReady(music); // Checks if a music stream is ready
//     }

//     void UnloadMusicStream(Music music)
//     {
//         ::UnloadMusicStream(music); // Unload music stream
//     }

//     void PlayMusicStream(Music music)
//     {
//         ::PlayMusicStream(music); // Start music playing
//     }

//     bool IsMusicStreamPlaying(Music music)
//     {
//         return ::IsMusicStreamPlaying(music); // Check if music is playing
//     }

//     void UpdateMusicStream(Music music)
//     {
//         ::UpdateMusicStream(music); // Updates buffers for music streaming
//     }

//     void StopMusicStream(Music music)
//     {
//         ::StopMusicStream(music); // Stop music playing
//     }

//     void PauseMusicStream(Music music)
//     {
//         ::PauseMusicStream(music); // Pause music playing
//     }

//     void ResumeMusicStream(Music music)
//     {
//         ::ResumeMusicStream(music); // Resume playing paused music
//     }

//     void SeekMusicStream(Music music, float position)
//     {
//         ::SeekMusicStream(music, position); // Seek music to a position (in seconds)
//     }

//     void SetMusicVolume(Music music, float volume)
//     {
//         ::SetMusicVolume(music, volume); // Set volume for music (1.0 is max level)
//     }

//     void SetMusicPitch(Music music, float pitch)
//     {
//         ::SetMusicPitch(music, pitch); // Set pitch for a music (1.0 is base level)
//     }

//     void SetMusicPan(Music music, float pan)
//     {
//         ::SetMusicPan(music, pan); // Set pan for a music (0.5 is center)
//     }

//     float GetMusicTimeLength(Music music)
//     {
//         return ::GetMusicTimeLength(music); // Get music time length (in seconds)
//     }

//     float GetMusicTimePlayed(Music music)
//     {
//         return ::GetMusicTimePlayed(music); // Get current music time played (in seconds)
//     }

//     AudioStream LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
//     {
//         return ::LoadAudioStream(sampleRate, sampleSize, channels); // Load audio stream (to stream raw audio pcm data)
//     }

//     bool IsAudioStreamReady(AudioStream stream)
//     {
//         return ::IsAudioStreamReady(stream); // Checks if an audio stream is ready
//     }

//     void UnloadAudioStream(AudioStream stream)
//     {
//         ::UnloadAudioStream(stream); // Unload audio stream and free memory
//     }

//     void UpdateAudioStream(AudioStream stream, const void *data, int frameCount)
//     {
//         ::UpdateAudioStream(stream, data, frameCount); // Update audio stream buffers with data
//     }

//     bool IsAudioStreamProcessed(AudioStream stream)
//     {
//         return ::IsAudioStreamProcessed(stream); // Check if any audio stream buffers requires refill
//     }

//     void PlayAudioStream(AudioStream stream)
//     {
//         ::PlayAudioStream(stream); // Play audio stream
//     }

//     void PauseAudioStream(AudioStream stream)
//     {
//         ::PauseAudioStream(stream); // Pause audio stream
//     }

//     void ResumeAudioStream(AudioStream stream)
//     {
//         ::ResumeAudioStream(stream); // Resume audio stream
//     }

//     bool IsAudioStreamPlaying(AudioStream stream)
//     {
//         return ::IsAudioStreamPlaying(stream); // Check if audio stream is playing
//     }

//     void StopAudioStream(AudioStream stream)
//     {
//         ::StopAudioStream(stream); // Stop audio stream
//     }

//     void SetAudioStreamVolume(AudioStream stream, float volume)
//     {
//         ::SetAudioStreamVolume(stream, volume); // Set volume for audio stream (1.0 is max level)
//     }

//     void SetAudioStreamPitch(AudioStream stream, float pitch)
//     {
//         ::SetAudioStreamPitch(stream, pitch); // Set pitch for audio stream (1.0 is base level)
//     }

//     void SetAudioStreamPan(AudioStream stream, float pan)
//     {
//         ::SetAudioStreamPan(stream, pan); // Set pan for audio stream (0.5 is centered)
//     }

//     void SetAudioStreamBufferSizeDefault(int size)
//     {
//         ::SetAudioStreamBufferSizeDefault(size); // Default size for new audio streams
//     }

//     void SetAudioStreamCallback(AudioStream stream, AudioCallback callback)
//     {
//         ::SetAudioStreamCallback(stream, callback); // Audio thread callback to request new data
//     }

//     void AttachAudioStreamProcessor(AudioStream stream, AudioCallback processor)
//     {
//         ::AttachAudioStreamProcessor(stream, processor); // Attach audio stream processor to stream, receives the samples as <float>s
//     }

//     void DetachAudioStreamProcessor(AudioStream stream, AudioCallback processor)
//     {
//         ::DetachAudioStreamProcessor(stream, processor); // Detach audio stream processor from stream
//     }

//     void AttachAudioMixedProcessor(AudioCallback processor)
//     {
//         ::AttachAudioMixedProcessor(processor); // Attach audio stream processor to the entire audio pipeline, receives the samples as <float>s
//     }

//     void DetachAudioMixedProcessor(AudioCallback processor)
//     {
//         ::DetachAudioMixedProcessor(processor); // Detach audio stream processor from the entire audio pipeline
//     }

// }

// #endif // RAYLIB_WRAPPER_H
