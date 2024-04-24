#include "RaylibWrapper/RaylibWrapper.hpp"
#include "raylib.h"

namespace rlw
{
    // Window-related functions
    void InitWindow(int width, int height, const char *title)
    {
        ::InitWindow(width, height, title); // Initialize window and OpenGL context
    }

    void CloseWindow()
    {
        ::CloseWindow(); // Close window and unload OpenGL context
    }

    bool WindowShouldClose()
    {
        return ::WindowShouldClose(); // Check if application should close (KEY_ESCAPE pressed or windows close icon clicked)
    }

    bool IsWindowReady()
    {
        return ::IsWindowReady(); // Check if window has been initialized successfully
    }

    bool IsWindowFullscreen()
    {
        return ::IsWindowFullscreen(); // Check if window is currently fullscreen
    }

    bool IsWindowHidden()
    {
        return ::IsWindowHidden(); // Check if window is currently hidden (only PLATFORM_DESKTOP)
    }

    bool IsWindowMinimized()
    {
        return ::IsWindowMinimized(); // Check if window is currently minimized (only PLATFORM_DESKTOP)
    }

    bool IsWindowMaximized()
    {
        return ::IsWindowMaximized(); // Check if window is currently maximized (only PLATFORM_DESKTOP)
    }

    bool IsWindowFocused()
    {
        return ::IsWindowFocused(); // Check if window is currently focused (only PLATFORM_DESKTOP)
    }

    bool IsWindowResized()
    {
        return ::IsWindowResized(); // Check if window has been resized last frame
    }

    bool IsWindowState(unsigned int flag)
    {
        return ::IsWindowState(flag); // Check if one specific window flag is enabled
    }

    void SetWindowState(unsigned int flags)
    {
        ::SetWindowState(flags); // Set window configuration state using flags (only PLATFORM_DESKTOP)
    }

    void ClearWindowState(unsigned int flags)
    {
        ::ClearWindowState(flags); // Clear window configuration state flags
    }

    void ToggleFullscreen()
    {
        ::ToggleFullscreen(); // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
    }

    void ToggleBorderlessWindowed()
    {
        ::ToggleBorderlessWindowed(); // Toggle window state: borderless windowed (only PLATFORM_DESKTOP)
    }

    void MaximizeWindow()
    {
        ::MaximizeWindow(); // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
    }

    void MinimizeWindow()
    {
        ::MinimizeWindow(); // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
    }

    void RestoreWindow()
    {
        ::RestoreWindow(); // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
    }

    void SetWindowIcon(Image image)
    {
        ::SetWindowIcon(reinterpret_cast<::Image &>(image)); // Set icon for window (single image, RGBA 32bit, only PLATFORM_DESKTOP)
    }

    void SetWindowIcons(Image *images, int count)
    {
        ::SetWindowIcons(reinterpret_cast<::Image *>(images), count); // Pass the array of Image objects
    }

    void SetWindowTitle(const char *title)
    {
        ::SetWindowTitle(title); // Set title for window (only PLATFORM_DESKTOP and PLATFORM_WEB)
    }

    void SetWindowPosition(int x, int y)
    {
        ::SetWindowPosition(x, y); // Set window position on screen (only PLATFORM_DESKTOP)
    }

    void SetWindowMonitor(int monitor)
    {
        ::SetWindowMonitor(monitor); // Set monitor for the current window
    }

    void SetWindowMinSize(int width, int height)
    {
        ::SetWindowMinSize(width, height); // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
    }

    void SetWindowMaxSize(int width, int height)
    {
        ::SetWindowMaxSize(width, height); // Set window maximum dimensions (for FLAG_WINDOW_RESIZABLE)
    }

    void SetWindowSize(int width, int height)
    {
        ::SetWindowSize(width, height); // Set window dimensions
    }

    void SetWindowOpacity(float opacity)
    {
        ::SetWindowOpacity(opacity); // Set window opacity [0.0f..1.0f] (only PLATFORM_DESKTOP)
    }

    void SetWindowFocused()
    {
        ::SetWindowFocused(); // Set window focused (only PLATFORM_DESKTOP)
    }

    void *GetWindowHandle()
    {
        return ::GetWindowHandle(); // Get native window handle
    }

    int GetScreenWidth()
    {
        return ::GetScreenWidth(); // Get current screen width
    }

    int GetScreenHeight()
    {
        return ::GetScreenHeight(); // Get current screen height
    }

    int GetRenderWidth()
    {
        return ::GetRenderWidth(); // Get current render width (it considers HiDPI)
    }

    int GetRenderHeight()
    {
        return ::GetRenderHeight(); // Get current render height (it considers HiDPI)
    }

    int GetMonitorCount()
    {
        return ::GetMonitorCount(); // Get number of connected monitors
    }

    int GetCurrentMonitor()
    {
        return ::GetCurrentMonitor(); // Get current connected monitor
    }

    Vector2 GetMonitorPosition(int monitor)
    {
        ::Vector2 temp = ::GetMonitorPosition(monitor);
        return reinterpret_cast<Vector2 &>(temp);
    }

    int GetMonitorWidth(int monitor)
    {
        return ::GetMonitorWidth(monitor); // Get specified monitor width (current video mode used by monitor)
    }

    int GetMonitorHeight(int monitor)
    {
        return ::GetMonitorHeight(monitor); // Get specified monitor height (current video mode used by monitor)
    }

    int GetMonitorPhysicalWidth(int monitor)
    {
        return ::GetMonitorPhysicalWidth(monitor); // Get specified monitor physical width in millimetres
    }

    int GetMonitorPhysicalHeight(int monitor)
    {
        return ::GetMonitorPhysicalHeight(monitor); // Get specified monitor physical height in millimetres
    }

    int GetMonitorRefreshRate(int monitor)
    {
        return ::GetMonitorRefreshRate(monitor); // Get specified monitor refresh rate
    }

    Vector2 GetWindowPosition()
    {
        ::Vector2 temp = ::GetWindowPosition();
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetWindowScaleDPI()
    {
        ::Vector2 temp = ::GetWindowScaleDPI();
        return reinterpret_cast<Vector2 &>(temp);
    }

    const char *GetMonitorName(int monitor)
    {
        return ::GetMonitorName(monitor); // Get the human-readable, UTF-8 encoded name of the specified monitor
    }

    void SetClipboardText(const char *text)
    {
        ::SetClipboardText(text); // Set clipboard text content
    }

    const char *GetClipboardText()
    {
        return ::GetClipboardText(); // Get clipboard text content
    }

    void EnableEventWaiting()
    {
        ::EnableEventWaiting(); // Enable waiting for events on EndDrawing(), no automatic event polling
    }

    void DisableEventWaiting()
    {
        ::DisableEventWaiting(); // Disable waiting for events on EndDrawing(), automatic events polling
    }

    // Cursor-related functions
    void ShowCursor()
    {
        ::ShowCursor(); // Shows cursor
    }

    void HideCursor()
    {
        ::HideCursor(); // Hides cursor
    }

    bool IsCursorHidden()
    {
        return ::IsCursorHidden(); // Check if cursor is not visible
    }

    void EnableCursor()
    {
        ::EnableCursor(); // Enables cursor (unlock cursor)
    }

    void DisableCursor()
    {
        ::DisableCursor(); // Disables cursor (lock cursor)
    }

    bool IsCursorOnScreen()
    {
        return ::IsCursorOnScreen(); // Check if cursor is on the screen
    }

    // Drawing-related functions
    void ClearBackground(Color color)
    {
        ::ClearBackground(reinterpret_cast<::Color &>(color)); // Set background color (framebuffer clear color)
    }

    void BeginDrawing()
    {
        ::BeginDrawing(); // Setup canvas (framebuffer) to start drawing
    }

    void EndDrawing()
    {
        ::EndDrawing(); // End canvas drawing and swap buffers (double buffering)
    }

    void BeginMode2D(Camera2D camera)
    {
        ::BeginMode2D(reinterpret_cast<::Camera2D &>(camera)); // Begin 2D mode with custom camera (2D)
    }

    void EndMode2D()
    {
        ::EndMode2D(); // Ends 2D mode with custom camera
    }

    void BeginMode3D(Camera3D camera)
    {
        ::BeginMode3D(reinterpret_cast<::Camera3D &>(camera)); // Begin 3D mode with custom camera (3D)
    }

    void EndMode3D()
    {
        ::EndMode3D(); // Ends 3D mode and returns to default 2D orthographic mode
    }

    void BeginTextureMode(RenderTexture2D target)
    {
        ::BeginTextureMode(reinterpret_cast<::RenderTexture2D &>(target)); // Begin drawing to render texture
    }

    void EndTextureMode()
    {
        ::EndTextureMode(); // Ends drawing to render texture
    }

    void BeginShaderMode(Shader shader)
    {
        ::BeginShaderMode(reinterpret_cast<::Shader &>(shader)); // Begin custom shader drawing
    }

    void EndShaderMode()
    {
        ::EndShaderMode(); // End custom shader drawing (use default shader)
    }

    void BeginBlendMode(int mode)
    {
        ::BeginBlendMode(mode); // Begin blending mode (alpha, additive, multiplied, subtract, custom)
    }

    void EndBlendMode()
    {
        ::EndBlendMode(); // End blending mode (reset to default: alpha blending)
    }

    void BeginScissorMode(int x, int y, int width, int height)
    {
        ::BeginScissorMode(x, y, width, height); // Begin scissor mode (define screen area for following drawing)
    }

    void EndScissorMode()
    {
        ::EndScissorMode(); // End scissor mode
    }

    void BeginVrStereoMode(VrStereoConfig config)
    {
        ::BeginVrStereoMode(reinterpret_cast<::VrStereoConfig &>(config)); // Begin stereo rendering (requires VR simulator)
    }

    void EndVrStereoMode()
    {
        ::EndVrStereoMode(); // End stereo rendering (requires VR simulator)
    }

    // VR stereo config functions for VR simulator
    VrStereoConfig LoadVrStereoConfig(VrDeviceInfo device)
    {
        ::VrStereoConfig temp = ::LoadVrStereoConfig(reinterpret_cast<::VrDeviceInfo &>(device));
        return reinterpret_cast<VrStereoConfig &>(temp);
    }

    void UnloadVrStereoConfig(VrStereoConfig config)
    {
        ::UnloadVrStereoConfig(reinterpret_cast<::VrStereoConfig &>(config)); // Unload VR stereo config
    }

    // Shader management functions
    // NOTE: Shader functionality is not available on OpenGL 1.1

    Shader LoadShader(const char *vsFileName, const char *fsFileName)
    {
        ::Shader temp = ::LoadShader(vsFileName, fsFileName);
        return reinterpret_cast<Shader &>(temp);
    }

    Shader LoadShaderFromMemory(const char *vsCode, const char *fsCode)
    {
        ::Shader temp = ::LoadShaderFromMemory(vsCode, fsCode);
        return reinterpret_cast<Shader &>(temp);
    }

    bool IsShaderReady(Shader shader)
    {
        return ::IsShaderReady(reinterpret_cast<::Shader &>(shader)); // Check if a shader is ready
    }

    int GetShaderLocation(Shader shader, const char *uniformName)
    {
        return ::GetShaderLocation(reinterpret_cast<::Shader &>(shader), uniformName); // Get shader uniform location
    }

    int GetShaderLocationAttrib(Shader shader, const char *attribName)
    {
        return ::GetShaderLocationAttrib(reinterpret_cast<::Shader &>(shader), attribName); // Get shader attribute location
    }

    void SetShaderValue(Shader shader, int locIndex, const void *value, int uniformType)
    {
        ::SetShaderValue(reinterpret_cast<::Shader &>(shader), locIndex, value, uniformType); // Set shader uniform value
    }

    void SetShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count)
    {
        ::SetShaderValueV(reinterpret_cast<::Shader &>(shader), locIndex, value, uniformType, count); // Set shader uniform value vector
    }

    void SetShaderValueMatrix(Shader shader, int locIndex, Matrix mat)
    {
        ::SetShaderValueMatrix(reinterpret_cast<::Shader &>(shader), locIndex, reinterpret_cast<::Matrix &>(mat)); // Set shader uniform value (matrix 4x4)
    }

    void SetShaderValueTexture(Shader shader, int locIndex, Texture2D texture)
    {
        ::SetShaderValueTexture(reinterpret_cast<::Shader &>(shader), locIndex, reinterpret_cast<::Texture2D &>(texture)); // Set shader uniform value for texture (sampler2d)
    }

    void UnloadShader(Shader shader)
    {
        ::UnloadShader(reinterpret_cast<::Shader &>(shader)); // Unload shader from GPU memory (VRAM)
    }

    // Screen-space-related functions
    Ray GetMouseRay(Vector2 mousePosition, Camera camera)
    {
        ::Ray temp = ::GetMouseRay(reinterpret_cast<::Vector2 &>(mousePosition), reinterpret_cast<::Camera &>(camera));
        return reinterpret_cast<Ray &>(temp);
    }

    Matrix GetCameraMatrix(Camera camera)
    {
        ::Matrix temp = ::GetCameraMatrix(reinterpret_cast<::Camera &>(camera));
        return reinterpret_cast<Matrix &>(temp);
    }

    Matrix GetCameraMatrix2D(Camera2D camera)
    {
        ::Matrix temp = ::GetCameraMatrix2D(reinterpret_cast<::Camera2D &>(camera));
        return reinterpret_cast<Matrix &>(temp);
    }

    Vector2 GetWorldToScreen(Vector3 position, Camera camera)
    {
        ::Vector2 temp = ::GetWorldToScreen(reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Camera &>(camera));
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera)
    {
        ::Vector2 temp = ::GetScreenToWorld2D(reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Camera2D &>(camera));
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetWorldToScreenEx(Vector3 position, Camera camera, int width, int height)
    {
        ::Vector2 temp = ::GetWorldToScreenEx(reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Camera &>(camera), width, height);
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetWorldToScreen2D(Vector2 position, Camera2D camera)
    {
        ::Vector2 temp = ::GetWorldToScreen2D(reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Camera2D &>(camera));
        return reinterpret_cast<Vector2 &>(temp);
    }

    void SetTargetFPS(int fps)
    {
        ::SetTargetFPS(fps); // Set target FPS (maximum)
    }

    float GetFrameTime(void)
    {
        return ::GetFrameTime(); // Get time in seconds for last frame drawn (delta time)
    }

    double GetTime(void)
    {
        return ::GetTime(); // Get elapsed time in seconds since InitWindow()
    }

    int GetFPS(void)
    {
        return ::GetFPS(); // Get current FPS
    }

    // Custom frame control functions
    // NOTE: Those functions are intended for advance users that want full control over the frame processing
    // By default EndDrawing() does this job: draws everything + SwapScreenBuffer() + manage frame timing + PollInputEvents()
    // To avoid that behaviour and control frame processes manually, enable in config.h: SUPPORT_CUSTOM_FRAME_CONTROL
    void SwapScreenBuffer(void)
    {
        ::SwapScreenBuffer(); // Swap back buffer with front buffer (screen drawing)
    }

    void PollInputEvents(void)
    {
        ::PollInputEvents(); // Register all input events
    }

    void WaitTime(double seconds)
    {
        ::WaitTime(seconds); // Wait for some time (halt program execution)
    }

    // Random values generation functions
    void SetRandomSeed(unsigned int seed)
    {
        ::SetRandomSeed(seed); // Set the seed for the random number generator
    }

    int GetRandomValue(int min, int max)
    {
        return ::GetRandomValue(min, max); // Get a random value between min and max (both included)
    }

    int *LoadRandomSequence(unsigned int count, int min, int max)
    {
        return ::LoadRandomSequence(count, min, max); // Load random values sequence, no values repeated
    }

    void UnloadRandomSequence(int *sequence)
    {
        ::UnloadRandomSequence(sequence); // Unload random values sequence
    }

    void TakeScreenshot(const char *fileName)
    {
        ::TakeScreenshot(fileName); // Takes a screenshot of the current screen (filename extension defines format)
    }

    void SetConfigFlags(unsigned int flags)
    {
        ::SetConfigFlags(flags); // Setup init configuration flags (view FLAGS)
    }

    void OpenURL(const char *url)
    {
        ::OpenURL(url); // Open URL with the default system browser (if available)
    }

    void TraceLog(int logLevel, const char *text, ...)
    {
        ::TraceLog(logLevel, text); // Show trace log messages (LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR...)
    }

    void SetTraceLogLevel(int logLevel)
    {
        ::SetTraceLogLevel(logLevel); // Set the current threshold (minimum) log level
    }

    void *MemAlloc(unsigned int size)
    {
        return ::MemAlloc(size); // Internal memory allocator
    }

    void *MemRealloc(void *ptr, unsigned int size)
    {
        return ::MemRealloc(ptr, size); // Internal memory reallocator
    }

    void MemFree(void *ptr)
    {
        ::MemFree(ptr); // Internal memory free
    }

    // Set custom callbacks
    // WARNING: Callbacks setup is intended for advance users
    void SetTraceLogCallback(TraceLogCallback callback)
    {
        ::SetTraceLogCallback(reinterpret_cast<::TraceLogCallback &>(callback)); // Set custom trace log
    }

    void SetLoadFileDataCallback(LoadFileDataCallback callback)
    {
        ::SetLoadFileDataCallback(reinterpret_cast<::LoadFileDataCallback &>(callback)); // Set custom file binary data loader
    }

    void SetSaveFileDataCallback(SaveFileDataCallback callback)
    {
        ::SetSaveFileDataCallback(reinterpret_cast<::SaveFileDataCallback &>(callback)); // Set custom file binary data saver
    }

    void SetLoadFileTextCallback(LoadFileTextCallback callback)
    {
        ::SetLoadFileTextCallback(reinterpret_cast<::LoadFileTextCallback &>(callback)); // Set custom file text data loader
    }

    void SetSaveFileTextCallback(SaveFileTextCallback callback)
    {
        ::SetSaveFileTextCallback(reinterpret_cast<::SaveFileTextCallback &>(callback)); // Set custom file text data saver
    }

    unsigned char *LoadFileData(const char *fileName, int *dataSize)
    {
        return ::LoadFileData(fileName, dataSize); // Load file data as byte array (read)
    }

    void UnloadFileData(unsigned char *data)
    {
        ::UnloadFileData(data); // Unload file data allocated by LoadFileData()
    }

    bool SaveFileData(const char *fileName, void *data, int dataSize)
    {
        return ::SaveFileData(fileName, data, dataSize); // Save data to file from byte array (write), returns true on success
    }

    bool ExportDataAsCode(const unsigned char *data, int dataSize, const char *fileName)
    {
        return ::ExportDataAsCode(data, dataSize, fileName); // Export data to code (.h), returns true on success
    }

    char *LoadFileText(const char *fileName)
    {
        return ::LoadFileText(fileName); // Load text data from file (read), returns a '\0' terminated string
    }

    void UnloadFileText(char *text)
    {
        ::UnloadFileText(text); // Unload file text data allocated by LoadFileText()
    }

    bool SaveFileText(const char *fileName, char *text)
    {
        return ::SaveFileText(fileName, text); // Save text data to file (write), string must be '\0' terminated, returns true on success
    }

    bool FileExists(const char *fileName)
    {
        return ::FileExists(fileName); // Check if file exists
    }

    bool DirectoryExists(const char *dirPath)
    {
        return ::DirectoryExists(dirPath); // Check if a directory path exists
    }

    bool IsFileExtension(const char *fileName, const char *ext)
    {
        return ::IsFileExtension(fileName, ext); // Check file extension (including point: .png, .wav)
    }

    int GetFileLength(const char *fileName)
    {
        return ::GetFileLength(fileName); // Get file length in bytes (NOTE: GetFileSize() conflicts with windows.h)
    }

    const char *GetFileExtension(const char *fileName)
    {
        return ::GetFileExtension(fileName); // Get pointer to extension for a filename string (includes dot: '.png')
    }

    const char *GetFileName(const char *filePath)
    {
        return ::GetFileName(filePath); // Get pointer to filename for a path string
    }

    const char *GetFileNameWithoutExt(const char *filePath)
    {
        return ::GetFileNameWithoutExt(filePath); // Get filename string without extension (uses static string)
    }

    const char *GetDirectoryPath(const char *filePath)
    {
        return ::GetDirectoryPath(filePath); // Get full path for a given fileName with path (uses static string)
    }

    const char *GetPrevDirectoryPath(const char *dirPath)
    {
        return ::GetPrevDirectoryPath(dirPath); // Get previous directory path for a given path (uses static string)
    }

    const char *GetWorkingDirectory(void)
    {
        return ::GetWorkingDirectory(); // Get current working directory (uses static string)
    }

    const char *GetApplicationDirectory(void)
    {
        return ::GetApplicationDirectory(); // Get the directory of the running application (uses static string)
    }

    bool ChangeDirectory(const char *dir)
    {
        return ::ChangeDirectory(dir); // Change working directory, return true on success
    }

    bool IsPathFile(const char *path)
    {
        return ::IsPathFile(path); // Check if a given path is a file or a directory
    }

    FilePathList LoadDirectoryFiles(const char *dirPath)
    {
        ::FilePathList temp = ::LoadDirectoryFiles(dirPath);
        return reinterpret_cast<FilePathList &>(temp);
    }

    FilePathList LoadDirectoryFilesEx(const char *basePath, const char *filter, bool scanSubdirs)
    {
        ::FilePathList temp = ::LoadDirectoryFilesEx(basePath, filter, scanSubdirs);
        return reinterpret_cast<FilePathList &>(temp);
    }

    void UnloadDirectoryFiles(FilePathList files)
    {
        ::UnloadDirectoryFiles(reinterpret_cast<::FilePathList &>(files)); // Unload filepaths
    }

    bool IsFileDropped(void)
    {
        return ::IsFileDropped(); // Check if a file has been dropped into window
    }

    FilePathList LoadDroppedFiles(void)
    {
        ::FilePathList temp = ::LoadDroppedFiles();
        return reinterpret_cast<FilePathList &>(temp);
    }

    void UnloadDroppedFiles(FilePathList files)
    {
        ::UnloadDroppedFiles(reinterpret_cast<::FilePathList &>(files)); // Unload dropped filepaths
    }

    long GetFileModTime(const char *fileName)
    {
        return ::GetFileModTime(fileName); // Get file modification time (last write time)
    }

    unsigned char *CompressData(const unsigned char *data, int dataSize, int *compDataSize)
    {
        return ::CompressData(data, dataSize, compDataSize); // Compress data (DEFLATE algorithm), memory must be MemFree()
    }

    unsigned char *DecompressData(const unsigned char *compData, int compDataSize, int *dataSize)
    {
        return ::DecompressData(compData, compDataSize, dataSize); // Decompress data (DEFLATE algorithm), memory must be MemFree()
    }

    char *EncodeDataBase64(const unsigned char *data, int dataSize, int *outputSize)
    {
        return ::EncodeDataBase64(data, dataSize, outputSize); // Encode data to Base64 string, memory must be MemFree()
    }

    unsigned char *DecodeDataBase64(const unsigned char *data, int *outputSize)
    {
        return ::DecodeDataBase64(data, outputSize); // Decode Base64 string data, memory must be MemFree()
    }

    AutomationEventList LoadAutomationEventList(const char *fileName)
    {
        ::AutomationEventList temp = ::LoadAutomationEventList(fileName);
        return reinterpret_cast<AutomationEventList &>(temp);
    }

    void UnloadAutomationEventList(AutomationEventList *list)
    {
        ::UnloadAutomationEventList(reinterpret_cast<::AutomationEventList &>(*list)); // Unload automation events list from file
    }

    bool ExportAutomationEventList(AutomationEventList list, const char *fileName)
    {
        return ::ExportAutomationEventList(reinterpret_cast<::AutomationEventList &>(list), fileName); // Export automation events list as text file
    }

    void SetAutomationEventList(AutomationEventList *list)
    {
        ::SetAutomationEventList(reinterpret_cast<::AutomationEventList *>(list)); // Set automation event list to record to
    }

    void SetAutomationEventBaseFrame(int frame)
    {
        ::SetAutomationEventBaseFrame(frame); // Set automation event internal base frame to start recording
    }

    void StartAutomationEventRecording(void)
    {
        ::StartAutomationEventRecording(); // Start recording automation events (AutomationEventList must be set)
    }

    void StopAutomationEventRecording(void)
    {
        ::StopAutomationEventRecording(); // Stop recording automation events
    }

    void PlayAutomationEvent(AutomationEvent event)
    {
        ::PlayAutomationEvent(reinterpret_cast<::AutomationEvent &>(event)); // Play a recorded automation event
        // ::PlayAutomationEvent(event); // Play a recorded automation event
    }

    //------------------------------------------------------------------------------------
    // Input Handling Functions (Module: core)
    //------------------------------------------------------------------------------------

    // Input-related functions: keyboard
    bool IsKeyPressed(int key)
    {
        return ::IsKeyPressed(key); // Check if a key has been pressed once
    }

    bool IsKeyPressedRepeat(int key)
    {
        return ::IsKeyPressedRepeat(key); // Check if a key has been pressed again (Only PLATFORM_DESKTOP)
    }

    bool IsKeyDown(int key)
    {
        return ::IsKeyDown(key); // Check if a key is being pressed
    }

    bool IsKeyReleased(int key)
    {
        return ::IsKeyReleased(key); // Check if a key has been released once
    }

    bool IsKeyUp(int key)
    {
        return ::IsKeyUp(key); // Check if a key is NOT being pressed
    }

    int GetKeyPressed(void)
    {
        return ::GetKeyPressed(); // Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
    }

    int GetCharPressed(void)
    {
        return ::GetCharPressed(); // Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
    }

    void SetExitKey(int key)
    {
        ::SetExitKey(key); // Set a custom key to exit program (default is ESC)
    }

    // Input-related functions: gamepads
    bool IsGamepadAvailable(int gamepad)
    {
        return ::IsGamepadAvailable(gamepad); // Check if a gamepad is available
    }

    const char *GetGamepadName(int gamepad)
    {
        return ::GetGamepadName(gamepad); // Get gamepad internal name id
    }

    bool IsGamepadButtonPressed(int gamepad, int button)
    {
        return ::IsGamepadButtonPressed(gamepad, button); // Check if a gamepad button has been pressed once
    }

    bool IsGamepadButtonDown(int gamepad, int button)
    {
        return ::IsGamepadButtonDown(gamepad, button); // Check if a gamepad button is being pressed
    }

    bool IsGamepadButtonReleased(int gamepad, int button)
    {
        return ::IsGamepadButtonReleased(gamepad, button); // Check if a gamepad button has been released once
    }

    bool IsGamepadButtonUp(int gamepad, int button)
    {
        return ::IsGamepadButtonUp(gamepad, button); // Check if a gamepad button is NOT being pressed
    }

    int GetGamepadButtonPressed(void)
    {
        return ::GetGamepadButtonPressed(); // Get the last gamepad button pressed
    }

    int GetGamepadAxisCount(int gamepad)
    {
        return ::GetGamepadAxisCount(gamepad); // Get gamepad axis count for a gamepad
    }

    float GetGamepadAxisMovement(int gamepad, int axis)
    {
        return ::GetGamepadAxisMovement(gamepad, axis); // Get axis movement value for a gamepad axis
    }

    int SetGamepadMappings(const char *mappings)
    {
        return ::SetGamepadMappings(mappings); // Set internal gamepad mappings (SDL_GameControllerDB)
    }

    // Input-related functions: mouse
    bool IsMouseButtonPressed(int button)
    {
        return ::IsMouseButtonPressed(button); // Check if a mouse button has been pressed once
    }

    bool IsMouseButtonDown(int button)
    {
        return ::IsMouseButtonDown(button); // Check if a mouse button is being pressed
    }

    bool IsMouseButtonReleased(int button)
    {
        return ::IsMouseButtonReleased(button); // Check if a mouse button has been released once
    }

    bool IsMouseButtonUp(int button)
    {
        return ::IsMouseButtonUp(button); // Check if a mouse button is NOT being pressed
    }

    int GetMouseX(void)
    {
        return ::GetMouseX(); // Get mouse position X
    }

    int GetMouseY(void)
    {
        return ::GetMouseY(); // Get mouse position Y
    }

    Vector2 GetMousePosition(void)
    {
        ::Vector2 temp = ::GetMousePosition();
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetMouseDelta(void)
    {
        ::Vector2 temp = ::GetMouseDelta();
        return reinterpret_cast<Vector2 &>(temp);
    }

    void SetMousePosition(int x, int y)
    {
        ::SetMousePosition(x, y); // Set mouse position XY
    }

    void SetMouseOffset(int offsetX, int offsetY)
    {
        ::SetMouseOffset(offsetX, offsetY); // Set mouse offset
    }

    void SetMouseScale(float scaleX, float scaleY)
    {
        ::SetMouseScale(scaleX, scaleY); // Set mouse scaling
    }

    float GetMouseWheelMove(void)
    {
        return ::GetMouseWheelMove(); // Get mouse wheel movement for X or Y, whichever is larger
    }

    Vector2 GetMouseWheelMoveV(void)
    {
        ::Vector2 temp = ::GetMouseWheelMoveV();
        return reinterpret_cast<Vector2 &>(temp);
    }

    void SetMouseCursor(int cursor)
    {
        ::SetMouseCursor(cursor); // Set mouse cursor
    }

    // Input-related functions: touch
    int GetTouchX(void)
    {
        return ::GetTouchX(); // Get touch position X for touch point 0 (relative to screen size)
    }

    int GetTouchY(void)
    {
        return ::GetTouchY(); // Get touch position Y for touch point 0 (relative to screen size)
    }

    Vector2 GetTouchPosition(int index)
    {
        ::Vector2 temp = ::GetTouchPosition(index);
        return reinterpret_cast<Vector2 &>(temp);

        // return ::GetTouchPosition(index); // Get touch position XY for a touch point index (relative to screen size)
    }

    int GetTouchPointId(int index)
    {
        return ::GetTouchPointId(index); // Get touch point identifier for given index
    }

    int GetTouchPointCount(void)
    {
        return ::GetTouchPointCount(); // Get number of touch points
    }

    //------------------------------------------------------------------------------------
    // Gestures and Touch Handling Functions (Module: rgestures)
    //------------------------------------------------------------------------------------

    void SetGesturesEnabled(unsigned int flags)
    {
        ::SetGesturesEnabled(flags); // Enable a set of gestures using flags
    }

    bool IsGestureDetected(unsigned int gesture)
    {
        return ::IsGestureDetected(gesture); // Check if a gesture has been detected
    }

    int GetGestureDetected(void)
    {
        return ::GetGestureDetected(); // Get the latest detected gesture
    }

    float GetGestureHoldDuration(void)
    {
        return ::GetGestureHoldDuration(); // Get gesture hold time in milliseconds
    }

    Vector2 GetGestureDragVector(void)
    {
        ::Vector2 temp = ::GetGestureDragVector();
        return reinterpret_cast<Vector2 &>(temp);
    }

    float GetGestureDragAngle(void)
    {
        return ::GetGestureDragAngle(); // Get gesture drag angle
    }

    Vector2 GetGesturePinchVector(void)
    {
        ::Vector2 temp = ::GetGesturePinchVector();
        return reinterpret_cast<Vector2 &>(temp);
    }

    float GetGesturePinchAngle(void)
    {
        return ::GetGesturePinchAngle(); // Get gesture pinch angle
    }

    //------------------------------------------------------------------------------------
    // Camera System Functions (Module: rcamera)
    //------------------------------------------------------------------------------------

    void UpdateCamera(Camera *camera, int mode)
    {
        ::UpdateCamera(reinterpret_cast<::Camera *>(camera), mode); // Update camera position for the selected mode
    }

    void UpdateCameraPro(Camera *camera, Vector3 movement, Vector3 rotation, float zoom)
    {
        ::UpdateCameraPro(reinterpret_cast<::Camera *>(camera), reinterpret_cast<::Vector3 &>(movement), reinterpret_cast<::Vector3 &>(rotation), zoom); // Update camera movement/rotation
    }

    //------------------------------------------------------------------------------------rshapes------------------------------------------------------------------------------------

    void SetShapesTexture(Texture2D texture, Rectangle source)
    {
        ::SetShapesTexture(reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Rectangle &>(source)); // Set texture and rectangle to be used on shapes drawing
    }

    void DrawPixel(int posX, int posY, Color color)
    {
        ::DrawPixel(posX, posY, reinterpret_cast<::Color &>(color)); // Draw a pixel
    }

    void DrawPixelV(Vector2 position, Color color)
    {
        ::DrawPixelV(reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Color &>(color)); // Draw a pixel (Vector version)
    }

    void DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)
    {
        ::DrawLine(startPosX, startPosY, endPosX, endPosY, reinterpret_cast<::Color &>(color)); // Draw a line
    }

    void DrawLineV(Vector2 startPos, Vector2 endPos, Color color)
    {
        ::DrawLineV(reinterpret_cast<::Vector2 &>(startPos), reinterpret_cast<::Vector2 &>(endPos), reinterpret_cast<::Color &>(color)); // Draw a line (using gl lines)
    }

    void DrawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)
    {
        ::DrawLineEx(reinterpret_cast<::Vector2 &>(startPos), reinterpret_cast<::Vector2 &>(endPos), thick, reinterpret_cast<::Color &>(color)); // Draw a line (using triangles/quads)
    }

    void DrawLineStrip(Vector2 *points, int pointCount, Color color)
    {
        ::DrawLineStrip(reinterpret_cast<::Vector2 *>(points), pointCount, reinterpret_cast<::Color &>(color)); // Draw lines sequence (using gl lines)
    }

    void DrawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)
    {
        ::DrawLineBezier(reinterpret_cast<::Vector2 &>(startPos), reinterpret_cast<::Vector2 &>(endPos), thick, reinterpret_cast<::Color &>(color)); // Draw line segment cubic-bezier in-out interpolation
    }

    void DrawCircle(int centerX, int centerY, float radius, Color color)
    {
        ::DrawCircle(centerX, centerY, radius, reinterpret_cast<::Color &>(color)); // Draw a color-filled circle
    }

    void DrawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
    {
        ::DrawCircleSector(reinterpret_cast<::Vector2 &>(center), radius, startAngle, endAngle, segments, reinterpret_cast<::Color &>(color)); // Draw a piece of a circle
    }

    void DrawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
    {
        ::DrawCircleSectorLines(reinterpret_cast<::Vector2 &>(center), radius, startAngle, endAngle, segments, reinterpret_cast<::Color &>(color)); // Draw circle sector outline
    }

    void DrawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2)
    {
        ::DrawCircleGradient(centerX, centerY, radius, reinterpret_cast<::Color &>(color1), reinterpret_cast<::Color &>(color2)); // Draw a gradient-filled circle
    }

    void DrawCircleV(Vector2 center, float radius, Color color)
    {
        ::DrawCircleV(reinterpret_cast<::Vector2 &>(center), radius, reinterpret_cast<::Color &>(color)); // Draw a color-filled circle (Vector version)
    }

    void DrawCircleLines(int centerX, int centerY, float radius, Color color)
    {
        ::DrawCircleLines(centerX, centerY, radius, reinterpret_cast<::Color &>(color)); // Draw circle outline
    }

    void DrawCircleLinesV(Vector2 center, float radius, Color color)
    {
        ::DrawCircleLinesV(reinterpret_cast<::Vector2 &>(center), radius, reinterpret_cast<::Color &>(color)); // Draw circle outline (Vector version)
    }

    void DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)
    {
        ::DrawEllipse(centerX, centerY, radiusH, radiusV, reinterpret_cast<::Color &>(color)); // Draw ellipse
    }

    void DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)
    {
        ::DrawEllipseLines(centerX, centerY, radiusH, radiusV, reinterpret_cast<::Color &>(color)); // Draw ellipse outline
    }

    void DrawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
    {
        ::DrawRing(reinterpret_cast<::Vector2 &>(center), innerRadius, outerRadius, startAngle, endAngle, segments, reinterpret_cast<::Color &>(color)); // Draw ring
    }

    void DrawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
    {
        ::DrawRingLines(reinterpret_cast<::Vector2 &>(center), innerRadius, outerRadius, startAngle, endAngle, segments, reinterpret_cast<::Color &>(color)); // Draw ring outline
    }

    void DrawRectangle(int posX, int posY, int width, int height, Color color)
    {
        ::DrawRectangle(posX, posY, width, height, reinterpret_cast<::Color &>(color)); // Draw a color-filled rectangle
    }

    void DrawRectangleV(Vector2 position, Vector2 size, Color color)
    {
        ::DrawRectangleV(reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Vector2 &>(size), reinterpret_cast<::Color &>(color)); // Draw a color-filled rectangle (Vector version)
    }

    void DrawRectangleRec(Rectangle rec, Color color)
    {
        ::DrawRectangleRec(reinterpret_cast<::Rectangle &>(rec), reinterpret_cast<::Color &>(color)); // Draw a color-filled rectangle
    }

    void DrawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)
    {
        ::DrawRectanglePro(reinterpret_cast<::Rectangle &>(rec), reinterpret_cast<::Vector2 &>(origin), rotation, reinterpret_cast<::Color &>(color)); // Draw a color-filled rectangle with pro parameters
    }

    void DrawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2)
    {
        ::DrawRectangleGradientV(posX, posY, width, height, reinterpret_cast<::Color &>(color1), reinterpret_cast<::Color &>(color2)); // Draw a vertical-gradient-filled rectangle
    }

    void DrawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2)
    {
        ::DrawRectangleGradientH(posX, posY, width, height, reinterpret_cast<::Color &>(color1), reinterpret_cast<::Color &>(color2)); // Draw a horizontal-gradient-filled rectangle
    }

    void DrawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4)
    {
        ::DrawRectangleGradientEx(reinterpret_cast<::Rectangle &>(rec), reinterpret_cast<::Color &>(col1), reinterpret_cast<::Color &>(col2), reinterpret_cast<::Color &>(col3), reinterpret_cast<::Color &>(col4)); // Draw a gradient-filled rectangle with custom vertex colors
    }

    void DrawRectangleLines(int posX, int posY, int width, int height, Color color)
    {
        ::DrawRectangleLines(posX, posY, width, height, reinterpret_cast<::Color &>(color)); // Draw rectangle outline
    }

    void DrawRectangleLinesEx(Rectangle rec, float lineThick, Color color)
    {
        ::DrawRectangleLinesEx(reinterpret_cast<::Rectangle &>(rec), lineThick, reinterpret_cast<::Color &>(color)); // Draw rectangle outline with extended parameters
    }

    void DrawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)
    {
        ::DrawRectangleRounded(reinterpret_cast<::Rectangle &>(rec), roundness, segments, reinterpret_cast<::Color &>(color)); // Draw rectangle with rounded edges
    }

    void DrawRectangleRoundedLines(Rectangle rec, float roundness, int segments, Color color)
    {
        ::DrawRectangleRoundedLines(reinterpret_cast<::Rectangle &>(rec), roundness, segments, reinterpret_cast<::Color &>(color)); // Draw rectangle with rounded edges outline
    }

    void DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
    {
        ::DrawTriangle(reinterpret_cast<::Vector2 &>(v1), reinterpret_cast<::Vector2 &>(v2), reinterpret_cast<::Vector2 &>(v3), reinterpret_cast<::Color &>(color)); // Draw a color-filled triangle (vertex in counter-clockwise order!)
    }

    void DrawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
    {
        ::DrawTriangleLines(reinterpret_cast<::Vector2 &>(v1), reinterpret_cast<::Vector2 &>(v2), reinterpret_cast<::Vector2 &>(v3), reinterpret_cast<::Color &>(color)); // Draw triangle outline (vertex in counter-clockwise order!)
    }

    void DrawTriangleFan(Vector2 *points, int pointCount, Color color)
    {
        ::DrawTriangleFan(reinterpret_cast<::Vector2 *>(points), pointCount, reinterpret_cast<::Color &>(color)); // Draw a triangle fan defined by points (first vertex is the center)
    }

    void DrawTriangleStrip(Vector2 *points, int pointCount, Color color)
    {
        ::DrawTriangleStrip(reinterpret_cast<::Vector2 *>(points), pointCount, reinterpret_cast<::Color &>(color)); // Draw a triangle strip defined by points
    }

    void DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color)
    {
        ::DrawPoly(reinterpret_cast<::Vector2 &>(center), sides, radius, rotation, reinterpret_cast<::Color &>(color)); // Draw a regular polygon (Vector version)
    }

    void DrawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)
    {
        ::DrawPolyLines(reinterpret_cast<::Vector2 &>(center), sides, radius, rotation, reinterpret_cast<::Color &>(color)); // Draw a polygon outline of n sides
    }

    void DrawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color)
    {
        ::DrawPolyLinesEx(reinterpret_cast<::Vector2 &>(center), sides, radius, rotation, lineThick, reinterpret_cast<::Color &>(color)); // Draw a polygon outline of n sides with extended parameters
    }

    void DrawSplineLinear(Vector2 *points, int pointCount, float thick, Color color)
    {
        ::DrawSplineLinear(reinterpret_cast<::Vector2 *>(points), pointCount, thick, reinterpret_cast<::Color &>(color)); // Draw spline: Linear, minimum 2 points
    }

    void DrawSplineBasis(Vector2 *points, int pointCount, float thick, Color color)
    {
        ::DrawSplineBasis(reinterpret_cast<::Vector2 *>(points), pointCount, thick, reinterpret_cast<::Color &>(color)); // Draw spline: B-Spline, minimum 4 points
    }

    void DrawSplineCatmullRom(Vector2 *points, int pointCount, float thick, Color color)
    {
        ::DrawSplineCatmullRom(reinterpret_cast<::Vector2 *>(points), pointCount, thick, reinterpret_cast<::Color &>(color)); // Draw spline: Catmull-Rom, minimum 4 points
    }

    void DrawSplineBezierQuadratic(Vector2 *points, int pointCount, float thick, Color color)
    {
        ::DrawSplineBezierQuadratic(reinterpret_cast<::Vector2 *>(points), pointCount, thick, reinterpret_cast<::Color &>(color)); // Draw spline: Quadratic Bezier, minimum 3 points (1 control point): [p1, c2, p3, c4...]
    }

    void DrawSplineBezierCubic(Vector2 *points, int pointCount, float thick, Color color)
    {
        ::DrawSplineBezierCubic(reinterpret_cast<::Vector2 *>(points), pointCount, thick, reinterpret_cast<::Color &>(color)); // Draw spline: Cubic Bezier, minimum 4 points (2 control points): [p1, c2, c3, p4, c5, c6...]
    }

    void DrawSplineSegmentLinear(Vector2 p1, Vector2 p2, float thick, Color color)
    {
        ::DrawSplineSegmentLinear(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(p2), thick, reinterpret_cast<::Color &>(color)); // Draw spline segment: Linear, 2 points
    }

    void DrawSplineSegmentBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)
    {
        ::DrawSplineSegmentBasis(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(p2), reinterpret_cast<::Vector2 &>(p3), reinterpret_cast<::Vector2 &>(p4), thick, reinterpret_cast<::Color &>(color)); // Draw spline segment: B-Spline, 4 points
    }

    void DrawSplineSegmentCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)
    {
        ::DrawSplineSegmentCatmullRom(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(p2), reinterpret_cast<::Vector2 &>(p3), reinterpret_cast<::Vector2 &>(p4), thick, reinterpret_cast<::Color &>(color)); // Draw spline segment: Catmull-Rom, 4 points
    }

    void DrawSplineSegmentBezierQuadratic(Vector2 p1, Vector2 c2, Vector2 p3, float thick, Color color)
    {
        ::DrawSplineSegmentBezierQuadratic(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(c2), reinterpret_cast<::Vector2 &>(p3), thick, reinterpret_cast<::Color &>(color)); // Draw spline segment: Quadratic Bezier, 2 points, 1 control point
    }

    void DrawSplineSegmentBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float thick, Color color)
    {
        ::DrawSplineSegmentBezierCubic(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(c2), reinterpret_cast<::Vector2 &>(c3), reinterpret_cast<::Vector2 &>(p4), thick, reinterpret_cast<::Color &>(color)); // Draw spline segment: Cubic Bezier, 2 points, 2 control points
    }

    Vector2 GetSplinePointLinear(Vector2 startPos, Vector2 endPos, float t)
    {
        ::Vector2 temp = ::GetSplinePointLinear(reinterpret_cast<::Vector2 &>(startPos), reinterpret_cast<::Vector2 &>(endPos), t);
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetSplinePointBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)
    {
        ::Vector2 temp = ::GetSplinePointBasis(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(p2), reinterpret_cast<::Vector2 &>(p3), reinterpret_cast<::Vector2 &>(p4), t);
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetSplinePointCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)
    {
        ::Vector2 temp = ::GetSplinePointCatmullRom(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(p2), reinterpret_cast<::Vector2 &>(p3), reinterpret_cast<::Vector2 &>(p4), t);
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetSplinePointBezierQuad(Vector2 p1, Vector2 c2, Vector2 p3, float t)
    {
        ::Vector2 temp = ::GetSplinePointBezierQuad(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(c2), reinterpret_cast<::Vector2 &>(p3), t);
        return reinterpret_cast<Vector2 &>(temp);
    }

    Vector2 GetSplinePointBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float t)
    {
        ::Vector2 temp = ::GetSplinePointBezierCubic(reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(c2), reinterpret_cast<::Vector2 &>(c3), reinterpret_cast<::Vector2 &>(p4), t);
        return reinterpret_cast<Vector2 &>(temp);
    }

    bool CheckCollisionRecs(Rectangle rec1, Rectangle rec2)
    {
        return ::CheckCollisionRecs(reinterpret_cast<::Rectangle &>(rec1), reinterpret_cast<::Rectangle &>(rec2)); // Check collision between two rectangles
    }

    bool CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)
    {
        return ::CheckCollisionCircles(reinterpret_cast<::Vector2 &>(center1), radius1, reinterpret_cast<::Vector2 &>(center2), radius2); // Check collision between two circles
    }

    bool CheckCollisionCircleRec(Vector2 center, float radius, Rectangle rec)
    {
        return ::CheckCollisionCircleRec(reinterpret_cast<::Vector2 &>(center), radius, reinterpret_cast<::Rectangle &>(rec)); // Check collision between circle and rectangle
    }

    bool CheckCollisionPointRec(Vector2 point, Rectangle rec)
    {
        return ::CheckCollisionPointRec(reinterpret_cast<::Vector2 &>(point), reinterpret_cast<::Rectangle &>(rec)); // Check if point is inside rectangle
    }

    bool CheckCollisionPointCircle(Vector2 point, Vector2 center, float radius)
    {
        return ::CheckCollisionPointCircle(reinterpret_cast<::Vector2 &>(point), reinterpret_cast<::Vector2 &>(center), radius); // Check if point is inside circle
    }

    bool CheckCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)
    {
        return ::CheckCollisionPointTriangle(reinterpret_cast<::Vector2 &>(point), reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(p2), reinterpret_cast<::Vector2 &>(p3)); // Check if point is inside a triangle
    }

    bool CheckCollisionPointPoly(Vector2 point, Vector2 *points, int pointCount)
    {
        return ::CheckCollisionPointPoly(reinterpret_cast<::Vector2 &>(point), reinterpret_cast<::Vector2 *>(points), pointCount); // Check if point is within a polygon described by array of vertices
    }

    bool CheckCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint)
    {
        return ::CheckCollisionLines(reinterpret_cast<::Vector2 &>(startPos1), reinterpret_cast<::Vector2 &>(endPos1), reinterpret_cast<::Vector2 &>(startPos2), reinterpret_cast<::Vector2 &>(endPos2), reinterpret_cast<::Vector2 *>(collisionPoint)); // Check the collision between two lines defined by two points each, returns collision point by reference
    }

    bool CheckCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold)
    {
        return ::CheckCollisionPointLine(reinterpret_cast<::Vector2 &>(point), reinterpret_cast<::Vector2 &>(p1), reinterpret_cast<::Vector2 &>(p2), threshold); // Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
    }

    Rectangle GetCollisionRec(Rectangle rec1, Rectangle rec2)
    {
        ::Rectangle temp = ::GetCollisionRec(reinterpret_cast<::Rectangle &>(rec1), reinterpret_cast<::Rectangle &>(rec2));
        return reinterpret_cast<Rectangle &>(temp);
    }

    //------------------------------------------------------------------------------------rtextures------------------------------------------------------------------------------------

    // Image loading functions
    // NOTE: These functions do not require GPU access

    Image LoadImage(const char *fileName)
    {
        ::Image temp = ::LoadImage(fileName);
        return reinterpret_cast<Image &>(temp);
    }

    Image LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize)
    {
        ::Image temp = ::LoadImageRaw(fileName, width, height, format, headerSize);
        return reinterpret_cast<Image &>(temp);
    }

    Image LoadImageSvg(const char *fileNameOrString, int width, int height)
    {
        ::Image temp = ::LoadImageSvg(fileNameOrString, width, height);
        return reinterpret_cast<Image &>(temp);
    }

    Image LoadImageAnim(const char *fileName, int *frames)
    {
        ::Image temp = ::LoadImageAnim(fileName, frames);
        return reinterpret_cast<Image &>(temp);
    }

    Image LoadImageFromMemory(const char *fileType, const unsigned char *fileData, int dataSize)
    {
        ::Image temp = ::LoadImageFromMemory(fileType, fileData, dataSize);
        return reinterpret_cast<Image &>(temp);
    }

    Image LoadImageFromTexture(Texture2D texture)
    {
        ::Image temp = ::LoadImageFromTexture(reinterpret_cast<::Texture2D &>(texture));
        return reinterpret_cast<Image &>(temp);
    }

    Image LoadImageFromScreen(void)
    {
        ::Image temp = ::LoadImageFromScreen();
        return reinterpret_cast<Image &>(temp);
    }

    bool IsImageReady(Image image)
    {
        return ::IsImageReady(reinterpret_cast<::Image &>(image)); // Check if an image is ready
    }

    void UnloadImage(Image image)
    {
        ::UnloadImage(reinterpret_cast<::Image &>(image)); // Unload image from CPU memory (RAM)
    }

    bool ExportImage(Image image, const char *fileName)
    {
        return ::ExportImage(reinterpret_cast<::Image &>(image), fileName); // Export image data to file, returns true on success
    }

    unsigned char *ExportImageToMemory(Image image, const char *fileType, int *fileSize)
    {
        return ::ExportImageToMemory(reinterpret_cast<::Image &>(image), fileType, fileSize); // Export image to memory buffer
    }

    bool ExportImageAsCode(Image image, const char *fileName)
    {
        return ::ExportImageAsCode(reinterpret_cast<::Image &>(image), fileName); // Export image as code file defining an array of bytes, returns true on success
    }

    Image GenImageColor(int width, int height, Color color)
    {
        ::Image temp = ::GenImageColor(width, height, reinterpret_cast<::Color &>(color));
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImageGradientLinear(int width, int height, int direction, Color start, Color end)
    {
        ::Image temp = ::GenImageGradientLinear(width, height, direction, reinterpret_cast<::Color &>(start), reinterpret_cast<::Color &>(end));
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImageGradientRadial(int width, int height, float density, Color inner, Color outer)
    {
        ::Image temp = ::GenImageGradientRadial(width, height, density, reinterpret_cast<::Color &>(inner), reinterpret_cast<::Color &>(outer));
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImageGradientSquare(int width, int height, float density, Color inner, Color outer)
    {
        ::Image temp = ::GenImageGradientSquare(width, height, density, reinterpret_cast<::Color &>(inner), reinterpret_cast<::Color &>(outer));
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)
    {
        ::Image temp = ::GenImageChecked(width, height, checksX, checksY, reinterpret_cast<::Color &>(col1), reinterpret_cast<::Color &>(col2));
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImageWhiteNoise(int width, int height, float factor)
    {
        ::Image temp = ::GenImageWhiteNoise(width, height, factor);
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale)
    {
        ::Image temp = ::GenImagePerlinNoise(width, height, offsetX, offsetY, scale);
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImageCellular(int width, int height, int tileSize)
    {
        ::Image temp = ::GenImageCellular(width, height, tileSize);
        return reinterpret_cast<Image &>(temp);
    }

    Image GenImageText(int width, int height, const char *text)
    {
        ::Image temp = ::GenImageText(width, height, text);
        return reinterpret_cast<Image &>(temp);
    }

    Image ImageCopy(Image image)
    {
        ::Image temp = ImageCopy(reinterpret_cast<::Image &>(image));
        return reinterpret_cast<Image &>(temp);
    }

    Image ImageFromImage(Image image, Rectangle rec)
    {
        ::Image temp = ImageFromImage(reinterpret_cast<::Image &>(image), reinterpret_cast<::Rectangle &>(rec));
        return reinterpret_cast<Image &>(temp);
    }

    Image ImageText(const char *text, int fontSize, Color color)
    {
        ::Image temp = ImageText(text, fontSize, reinterpret_cast<::Color &>(color));
        return reinterpret_cast<Image &>(temp);
    }

    Image ImageTextEx(Font font, const char *text, float fontSize, float spacing, Color tint)
    {
        ::Image temp = ImageTextEx(reinterpret_cast<::Font &>(font), text, fontSize, spacing, reinterpret_cast<::Color &>(tint));
        return reinterpret_cast<Image &>(temp);
    }

    void ImageFormat(Image *image, int newFormat)
    {
        ::ImageFormat(reinterpret_cast<::Image *>(image), newFormat); // Convert image data to desired format
    }

    void ImageToPOT(Image *image, Color fill)
    {
        ::ImageToPOT(reinterpret_cast<::Image *>(image), reinterpret_cast<::Color &>(fill)); // Convert image to POT (power-of-two)
    }

    void ImageCrop(Image *image, Rectangle crop)
    {
        ::ImageCrop(reinterpret_cast<::Image *>(image), reinterpret_cast<::Rectangle &>(crop)); // Crop an image to a defined rectangle
    }

    void ImageAlphaCrop(Image *image, float threshold)
    {
        ::ImageAlphaCrop(reinterpret_cast<::Image *>(image), threshold); // Crop image depending on alpha value
    }

    void ImageAlphaClear(Image *image, Color color, float threshold)
    {
        ::ImageAlphaClear(reinterpret_cast<::Image *>(image), reinterpret_cast<::Color &>(color), threshold); // Clear alpha channel to desired color
    }

    void ImageAlphaMask(Image *image, Image alphaMask)
    {
        ::ImageAlphaMask(reinterpret_cast<::Image *>(image), reinterpret_cast<::Image &>(alphaMask)); // Apply alpha mask to image
    }

    void ImageAlphaPremultiply(Image *image)
    {
        ::ImageAlphaPremultiply(reinterpret_cast<::Image *>(image)); // Premultiply alpha channel
    }

    void ImageBlurGaussian(Image *image, int blurSize)
    {
        ::ImageBlurGaussian(reinterpret_cast<::Image *>(image), blurSize); // Apply Gaussian blur using a box blur approximation
    }

    void ImageResize(Image *image, int newWidth, int newHeight)
    {
        ::ImageResize(reinterpret_cast<::Image *>(image), newWidth, newHeight); // Resize image (Bicubic scaling algorithm)
    }

    void ImageResizeNN(Image *image, int newWidth, int newHeight)
    {
        ::ImageResizeNN(reinterpret_cast<::Image *>(image), newWidth, newHeight); // Resize image (Nearest-Neighbor scaling algorithm)
    }

    void ImageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)
    {
        ::ImageResizeCanvas(reinterpret_cast<::Image *>(image), newWidth, newHeight, offsetX, offsetY, reinterpret_cast<::Color &>(fill)); // Resize canvas and fill with color
    }

    void ImageMipmaps(Image *image)
    {
        ::ImageMipmaps(reinterpret_cast<::Image *>(image)); // Compute all mipmap levels for a provided image
    }

    void ImageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp)
    {
        ::ImageDither(reinterpret_cast<::Image *>(image), rBpp, gBpp, bBpp, aBpp); // Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
    }

    void ImageFlipVertical(Image *image)
    {
        ::ImageFlipVertical(reinterpret_cast<::Image *>(image)); // Flip image vertically
    }

    void ImageFlipHorizontal(Image *image)
    {
        ::ImageFlipHorizontal(reinterpret_cast<::Image *>(image)); // Flip image horizontally
    }

    void ImageRotate(Image *image, int degrees)
    {
        ::ImageRotate(reinterpret_cast<::Image *>(image), degrees); // Rotate image by input angle in degrees (-359 to 359)
    }

    void ImageRotateCW(Image *image)
    {
        ::ImageRotateCW(reinterpret_cast<::Image *>(image)); // Rotate image clockwise 90deg
    }

    void ImageRotateCCW(Image *image)
    {
        ::ImageRotateCCW(reinterpret_cast<::Image *>(image)); // Rotate image counter-clockwise 90deg
    }

    void ImageColorTint(Image *image, Color color)
    {
        ::ImageColorTint(reinterpret_cast<::Image *>(image), reinterpret_cast<::Color &>(color)); // Modify image color: tint
    }

    void ImageColorInvert(Image *image)
    {
        ::ImageColorInvert(reinterpret_cast<::Image *>(image)); // Modify image color: invert
    }

    void ImageColorGrayscale(Image *image)
    {
        ::ImageColorGrayscale(reinterpret_cast<::Image *>(image)); // Modify image color: grayscale
    }

    void ImageColorContrast(Image *image, float contrast)
    {
        ::ImageColorContrast(reinterpret_cast<::Image *>(image), contrast); // Modify image color: contrast (-100 to 100)
    }

    void ImageColorBrightness(Image *image, int brightness)
    {
        ::ImageColorBrightness(reinterpret_cast<::Image *>(image), brightness); // Modify image color: brightness (-255 to 255)
    }

    void ImageColorReplace(Image *image, Color color, Color replace)
    {
        ::ImageColorReplace(reinterpret_cast<::Image *>(image), reinterpret_cast<::Color &>(color), reinterpret_cast<::Color &>(replace)); // Modify image color: replace color
    }

    Color *LoadImageColors(Image image)
    {
        ::Color *temp = ::LoadImageColors(reinterpret_cast<::Image &>(image));
        return reinterpret_cast<Color *>(temp);
    }


    Color *LoadImagePalette(Image image, int maxPaletteSize, int *colorCount)
    {
        ::Color *temp = ::LoadImagePalette(reinterpret_cast<::Image &>(image), maxPaletteSize, colorCount);
        return reinterpret_cast<Color *>(temp);
    }

    void UnloadImageColors(Color *colors)
    {
        ::UnloadImageColors(reinterpret_cast<::Color *>(colors)); // Unload color data loaded with LoadImageColors()
    }

    void UnloadImagePalette(Color *colors)
    {
        ::UnloadImagePalette(reinterpret_cast<::Color *>(colors)); // Unload colors palette loaded with LoadImagePalette()
    }

    Rectangle GetImageAlphaBorder(Image image, float threshold)
    {
        ::Rectangle temp = ::GetImageAlphaBorder(reinterpret_cast<::Image &>(image), threshold);
        return reinterpret_cast<Rectangle &>(temp);

        // return ::GetImageAlphaBorder(image, threshold); // Get image alpha border rectangle
    }

    Color GetImageColor(Image image, int x, int y)
    {
        ::Color temp = ::GetImageColor(reinterpret_cast<::Image &>(image), x, y);
        return reinterpret_cast<Color &>(temp);

        // return ::GetImageColor(image, x, y); // Get image pixel color at (x, y) position
    }

    void ImageClearBackground(Image *dst, Color color)
    {
        ::ImageClearBackground(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Color &>(color)); // Clear image background with given color
    }

    void ImageDrawPixel(Image *dst, int posX, int posY, Color color)
    {
        ::ImageDrawPixel(reinterpret_cast<::Image *>(dst), posX, posY, reinterpret_cast<::Color &>(color)); // Draw pixel within an image
    }

    void ImageDrawPixelV(Image *dst, Vector2 position, Color color)
    {
        ::ImageDrawPixelV(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Color &>(color)); // Draw pixel within an image (Vector version)
    }

    void ImageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)
    {
        ::ImageDrawLine(reinterpret_cast<::Image *>(dst), startPosX, startPosY, endPosX, endPosY, reinterpret_cast<::Color &>(color)); // Draw line within an image
    }

    void ImageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color)
    {
        ::ImageDrawLineV(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Vector2 &>(start), reinterpret_cast<::Vector2 &>(end), reinterpret_cast<::Color &>(color)); // Draw line within an image (Vector version)
    }

    void ImageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color)
    {
        ::ImageDrawCircle(reinterpret_cast<::Image *>(dst), centerX, centerY, radius, reinterpret_cast<::Color &>(color)); // Draw a filled circle within an image
    }

    void ImageDrawCircleV(Image *dst, Vector2 center, int radius, Color color)
    {
        ::ImageDrawCircleV(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Vector2 &>(center), radius, reinterpret_cast<::Color &>(color)); // Draw a filled circle within an image (Vector version)
    }

    void ImageDrawCircleLines(Image *dst, int centerX, int centerY, int radius, Color color)
    {
        ::ImageDrawCircleLines(reinterpret_cast<::Image *>(dst), centerX, centerY, radius, reinterpret_cast<::Color &>(color)); // Draw circle outline within an image
    }

    void ImageDrawCircleLinesV(Image *dst, Vector2 center, int radius, Color color)
    {
        ::ImageDrawCircleLinesV(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Vector2 &>(center), radius, reinterpret_cast<::Color &>(color)); // Draw circle outline within an image (Vector version)
    }

    void ImageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color)
    {
        ::ImageDrawRectangle(reinterpret_cast<::Image *>(dst), posX, posY, width, height, reinterpret_cast<::Color &>(color)); // Draw rectangle within an image
    }

    void ImageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color)
    {
        ::ImageDrawRectangleV(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Vector2 &>(size), reinterpret_cast<::Color &>(color)); // Draw rectangle within an image (Vector version)
    }

    void ImageDrawRectangleRec(Image *dst, Rectangle rec, Color color)
    {
        ::ImageDrawRectangleRec(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Rectangle &>(rec), reinterpret_cast<::Color &>(color)); // Draw rectangle within an image
    }

    void ImageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color)
    {
        ::ImageDrawRectangleLines(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Rectangle &>(rec), thick, reinterpret_cast<::Color &>(color)); // Draw rectangle lines within an image
    }

    void ImageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)
    {
        ::ImageDraw(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Image &>(src), reinterpret_cast<::Rectangle &>(srcRec), reinterpret_cast<::Rectangle &>(dstRec), reinterpret_cast<::Color &>(tint)); // Draw a source image within a destination image (tint applied to source)
    }

    void ImageDrawText(Image *dst, const char *text, int posX, int posY, int fontSize, Color color)
    {
        ::ImageDrawText(reinterpret_cast<::Image *>(dst), text, posX, posY, fontSize, reinterpret_cast<::Color &>(color)); // Draw text (using default font) within an image (destination)
    }

    void ImageDrawTextEx(Image *dst, Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint)
    {
        ::ImageDrawTextEx(reinterpret_cast<::Image *>(dst), reinterpret_cast<::Font &>(font), text, reinterpret_cast<::Vector2 &>(position), fontSize, spacing, reinterpret_cast<::Color &>(tint)); // Draw text (custom sprite font) within an image (destination)
    }

    Texture2D LoadTexture(const char *fileName)
    {
        ::Texture2D temp = ::LoadTexture(fileName);
        return reinterpret_cast<Texture2D &>(temp);
    }

    Texture2D LoadTextureFromImage(Image image)
    {
        ::Texture2D temp = ::LoadTextureFromImage(reinterpret_cast<::Image &>(image));
        return reinterpret_cast<Texture2D &>(temp);
    }

    TextureCubemap LoadTextureCubemap(Image image, int layout)
    {
        ::TextureCubemap temp = ::LoadTextureCubemap(reinterpret_cast<::Image &>(image), layout);
        return reinterpret_cast<TextureCubemap &>(temp);
    }

    RenderTexture2D LoadRenderTexture(int width, int height)
    {
        ::RenderTexture2D temp = ::LoadRenderTexture(width, height);
        return reinterpret_cast<RenderTexture2D &>(temp);
    }

    bool IsTextureReady(Texture2D texture)
    {
        return ::IsTextureReady(reinterpret_cast<::Texture2D &>(texture)); // Check if a texture is ready
    }

    void UnloadTexture(Texture2D texture)
    {
        ::UnloadTexture(reinterpret_cast<::Texture2D &>(texture)); // Unload texture from GPU memory (VRAM)
    }

    bool IsRenderTextureReady(RenderTexture2D target)
    {
        return ::IsRenderTextureReady(reinterpret_cast<::RenderTexture2D &>(target)); // Check if a render texture is ready
    }

    void UnloadRenderTexture(RenderTexture2D target)
    {
        ::UnloadRenderTexture(reinterpret_cast<::RenderTexture2D &>(target)); // Unload render texture from GPU memory (VRAM)
    }

    void UpdateTexture(Texture2D texture, const void *pixels)
    {
        ::UpdateTexture(reinterpret_cast<::Texture2D &>(texture), pixels); // Update GPU texture with new data
    }

    void UpdateTextureRec(Texture2D texture, Rectangle rec, const void *pixels)
    {
        ::UpdateTextureRec(reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Rectangle &>(rec), pixels); // Update GPU texture rectangle with new data
    }

    void GenTextureMipmaps(Texture2D *texture)
    {
        ::GenTextureMipmaps(reinterpret_cast<::Texture2D *>(texture)); // Generate GPU mipmaps for a texture
    }

    void SetTextureFilter(Texture2D texture, int filter)
    {
        ::SetTextureFilter(reinterpret_cast<::Texture2D &>(texture), filter); // Set texture scaling filter mode
    }

    void SetTextureWrap(Texture2D texture, int wrap)
    {
        ::SetTextureWrap(reinterpret_cast<::Texture2D &>(texture), wrap); // Set texture wrapping mode
    }

    void DrawTexture(Texture2D texture, int posX, int posY, Color tint)
    {
        ::DrawTexture(reinterpret_cast<::Texture2D &>(texture), posX, posY, reinterpret_cast<::Color &>(tint)); // Draw a Texture2D
    }

    void DrawTextureV(Texture2D texture, Vector2 position, Color tint)
    {
        ::DrawTextureV(reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Color &>(tint)); // Draw a Texture2D with position defined as Vector2
    }

    void DrawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint)
    {
        ::DrawTextureEx(reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Vector2 &>(position), rotation, scale, reinterpret_cast<::Color &>(tint)); // Draw a Texture2D with extended parameters
    }

    void DrawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint)
    {
        ::DrawTextureRec(reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Rectangle &>(source), reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Color &>(tint)); // Draw a part of a texture defined by a rectangle
    }

    void DrawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint)
    {
        ::DrawTexturePro(reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Rectangle &>(source), reinterpret_cast<::Rectangle &>(dest), reinterpret_cast<::Vector2 &>(origin), rotation, reinterpret_cast<::Color &>(tint)); // Draw a part of a texture defined by a rectangle with 'pro' parameters
    }

    void DrawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint)
    {
        ::DrawTextureNPatch(reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::NPatchInfo &>(nPatchInfo), reinterpret_cast<::Rectangle &>(dest), reinterpret_cast<::Vector2 &>(origin), rotation, reinterpret_cast<::Color &>(tint)); // Draws a texture (or part of it) that stretches or shrinks nicely
    }

    Color Fade(Color color, float alpha)
    {
        ::Color temp = ::Fade(reinterpret_cast<::Color &>(color), alpha);
        return reinterpret_cast<Color &>(temp);
    }

    int ColorToInt(Color color)
    {
        return ColorToInt(reinterpret_cast<::Color &>(color)); // Get hexadecimal value for a Color
    }

    Vector4 ColorNormalize(Color color)
    {
        ::Vector4 temp = ::ColorNormalize(reinterpret_cast<::Color &>(color));
        return reinterpret_cast<Vector4 &>(temp);
    }

    Color ColorFromNormalized(Vector4 normalized)
    {
        ::Color temp = ::ColorFromNormalized(reinterpret_cast<::Vector4 &>(normalized));
        return reinterpret_cast<Color &>(temp);
    }

    Vector3 ColorToHSV(Color color)
    {
        ::Vector3 temp = ::ColorToHSV(reinterpret_cast<::Color &>(color));
        return reinterpret_cast<Vector3 &>(temp);
    }

    Color ColorFromHSV(float hue, float saturation, float value)
    {
        ::Color temp = ::ColorFromHSV(hue, saturation, value);
        return reinterpret_cast<Color &>(temp);
    }

    Color ColorTint(Color color, Color tint)
    {
        ::Color temp = ::ColorTint(reinterpret_cast<::Color &>(color), reinterpret_cast<::Color &>(tint));
        return reinterpret_cast<Color &>(temp);
    }

    Color ColorBrightness(Color color, float factor)
    {
        ::Color temp = ::ColorBrightness(reinterpret_cast<::Color &>(color), factor);
        return reinterpret_cast<Color &>(temp);
    }

    Color ColorContrast(Color color, float contrast)
    {
        ::Color temp = ::ColorContrast(reinterpret_cast<::Color &>(color), contrast);
        return reinterpret_cast<Color &>(temp);
    }

    Color ColorAlpha(Color color, float alpha)
    {
        ::Color temp = ::ColorAlpha(reinterpret_cast<::Color &>(color), alpha);
        return reinterpret_cast<Color &>(temp);
    }

    Color ColorAlphaBlend(Color dst, Color src, Color tint)
    {
        ::Color temp = ::ColorAlphaBlend(reinterpret_cast<::Color &>(dst), reinterpret_cast<::Color &>(src), reinterpret_cast<::Color &>(tint));
        return reinterpret_cast<Color &>(temp);
    }

    Color GetColor(unsigned int hexValue)
    {
        ::Color temp = ::GetColor(hexValue);
        return reinterpret_cast<Color &>(temp);
    }

    Color GetPixelColor(void *srcPtr, int format)
    {
        ::Color temp = ::GetPixelColor(srcPtr, format);
        return reinterpret_cast<Color &>(temp);
    }

    void SetPixelColor(void *dstPtr, Color color, int format)
    {
        ::SetPixelColor(dstPtr, reinterpret_cast<::Color &>(color), format); // Set color formatted into destination pixel pointer
    }

    int GetPixelDataSize(int width, int height, int format)
    {
        return ::GetPixelDataSize(width, height, format); // Get pixel data size in bytes for certain format
    }

    //----------------------------------------------------------------------------rtext----------------------------------------------------------------------------

    Font GetFontDefault(void)
    {
        ::Font temp = ::GetFontDefault();
        return reinterpret_cast<Font &>(temp);
    }

    Font LoadFont(const char *fileName)
    {
        ::Font temp = ::LoadFont(fileName);
        return reinterpret_cast<Font &>(temp);
    }

    Font LoadFontEx(const char *fileName, int fontSize, int *codepoints, int codepointCount)
    {
        ::Font temp = ::LoadFontEx(fileName, fontSize, codepoints, codepointCount);
        return reinterpret_cast<Font &>(temp);
    }

    Font LoadFontFromImage(Image image, Color key, int firstChar)
    {
        ::Font temp = ::LoadFontFromImage(reinterpret_cast<::Image &>(image), reinterpret_cast<::Color &>(key), firstChar);
        return reinterpret_cast<Font &>(temp);
    }

    Font LoadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount)
    {
        ::Font temp = ::LoadFontFromMemory(fileType, fileData, dataSize, fontSize, codepoints, codepointCount);
        return reinterpret_cast<Font &>(temp);
    }

    bool IsFontReady(Font font)
    {
        return ::IsFontReady(reinterpret_cast<::Font &>(font)); // Check if a font is ready
    }

    GlyphInfo *LoadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount, int type)
    {
        ::GlyphInfo *temp = ::LoadFontData(fileData, dataSize, fontSize, codepoints, codepointCount, type);
        return reinterpret_cast<GlyphInfo *>(temp);
    }

    Image GenImageFontAtlas(const GlyphInfo *glyphs, Rectangle **glyphRecs, int glyphCount, int fontSize, int padding, int packMethod)
    {
        ::Image temp = ::GenImageFontAtlas(reinterpret_cast<const ::GlyphInfo *>(glyphs), reinterpret_cast<::Rectangle **>(glyphRecs), glyphCount, fontSize, padding, packMethod);
        return reinterpret_cast<Image &>(temp);
    }

    void UnloadFontData(GlyphInfo *glyphs, int glyphCount)
    {
        ::UnloadFontData(reinterpret_cast<::GlyphInfo *>(glyphs), glyphCount); // Unload font chars info data (RAM)
    }

    void UnloadFont(Font font)
    {
        ::UnloadFont(reinterpret_cast<::Font &>(font)); // Unload font from GPU memory (VRAM)
    }

    bool ExportFontAsCode(Font font, const char *fileName)
    {
        return ::ExportFontAsCode(reinterpret_cast<::Font &>(font), fileName); // Export font as code file, returns true on success
    }

    void DrawFPS(int posX, int posY)
    {
        ::DrawFPS(posX, posY); // Draw current FPS
    }

    void DrawText(const char *text, int posX, int posY, int fontSize, Color color)
    {
        ::DrawText(text, posX, posY, fontSize, reinterpret_cast<::Color &>(color)); // Draw text (using default font)
    }

    void DrawTextEx(Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint)
    {
        ::DrawTextEx(reinterpret_cast<::Font &>(font), text, reinterpret_cast<::Vector2 &>(position), fontSize, spacing, reinterpret_cast<::Color &>(tint)); // Draw text using font and additional parameters
    }

    void DrawTextPro(Font font, const char *text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint)
    {
        ::DrawTextPro(reinterpret_cast<::Font &>(font), text, reinterpret_cast<::Vector2 &>(position), reinterpret_cast<::Vector2 &>(origin), rotation, fontSize, spacing, reinterpret_cast<::Color &>(tint)); // Draw text using Font and pro parameters (rotation)
    }

    void DrawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)
    {
        ::DrawTextCodepoint(reinterpret_cast<::Font &>(font), codepoint, reinterpret_cast<::Vector2 &>(position), fontSize, reinterpret_cast<::Color &>(tint)); // Draw one character (codepoint)
    }

    void DrawTextCodepoints(Font font, const int *codepoints, int codepointCount, Vector2 position, float fontSize, float spacing, Color tint)
    {
        ::DrawTextCodepoints(reinterpret_cast<::Font &>(font), codepoints, codepointCount, reinterpret_cast<::Vector2 &>(position), fontSize, spacing, reinterpret_cast<::Color &>(tint)); // Draw multiple character (codepoint)
    }

    void SetTextLineSpacing(int spacing)
    {
        ::SetTextLineSpacing(spacing); // Set vertical line spacing when drawing with line-breaks
    }

    int MeasureText(const char *text, int fontSize)
    {
        return ::MeasureText(text, fontSize); // Measure string width for default font
    }

    Vector2 MeasureTextEx(Font font, const char *text, float fontSize, float spacing)
    {
        ::Vector2 temp = ::MeasureTextEx(reinterpret_cast<::Font &>(font), text, fontSize, spacing);
        return reinterpret_cast<Vector2 &>(temp);
    }

    int GetGlyphIndex(Font font, int codepoint)
    {
        return ::GetGlyphIndex(reinterpret_cast<::Font &>(font), codepoint); // Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found
    }

    GlyphInfo GetGlyphInfo(Font font, int codepoint)
    {
        ::GlyphInfo temp = ::GetGlyphInfo(reinterpret_cast<::Font &>(font), codepoint);
        return reinterpret_cast<GlyphInfo &>(temp);
    }

    Rectangle GetGlyphAtlasRec(Font font, int codepoint)
    {
        ::Rectangle temp = ::GetGlyphAtlasRec(reinterpret_cast<::Font &>(font), codepoint);
        return reinterpret_cast<Rectangle &>(temp);
    }

    char *LoadUTF8(const int *codepoints, int length)
    {
        return ::LoadUTF8(codepoints, length); // Load UTF-8 text encoded from codepoints array
    }

    void UnloadUTF8(char *text)
    {
        ::UnloadUTF8(text); // Unload UTF-8 text encoded from codepoints array
    }

    int *LoadCodepoints(const char *text, int *count)
    {
        return ::LoadCodepoints(text, count); // Load all codepoints from a UTF-8 text string, codepoints count returned by parameter
    }

    void UnloadCodepoints(int *codepoints)
    {
        ::UnloadCodepoints(codepoints); // Unload codepoints data from memory
    }

    int GetCodepointCount(const char *text)
    {
        return ::GetCodepointCount(text); // Get total number of codepoints in a UTF-8 encoded string
    }

    int GetCodepoint(const char *text, int *codepointSize)
    {
        return ::GetCodepoint(text, codepointSize); // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
    }

    int GetCodepointNext(const char *text, int *codepointSize)
    {
        return ::GetCodepointNext(text, codepointSize); // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
    }

    int GetCodepointPrevious(const char *text, int *codepointSize)
    {
        return ::GetCodepointPrevious(text, codepointSize); // Get previous codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
    }

    const char *CodepointToUTF8(int codepoint, int *utf8Size)
    {
        return ::CodepointToUTF8(codepoint, utf8Size); // Encode one codepoint into UTF-8 byte array (array length returned as parameter)
    }

    int TextCopy(char *dst, const char *src)
    {
        return ::TextCopy(dst, src); // Copy one string to another, returns bytes copied
    }

    bool TextIsEqual(const char *text1, const char *text2)
    {
        return ::TextIsEqual(text1, text2); // Check if two text strings are equal
    }

    unsigned int TextLength(const char *text)
    {
        return ::TextLength(text); // Get text length, checks for '\0' ending
    }

    const char *TextFormat(const char *text, ...)
    {
        va_list args;
        va_start(args, text);
        const char *formattedText = ::TextFormat(text, args); // Text formatting with variables (sprintf() style)
        va_end(args);
        return formattedText;
    }

    const char *TextSubtext(const char *text, int position, int length)
    {
        return ::TextSubtext(text, position, length); // Get a piece of a text string
    }

    char *TextReplace(char *text, const char *replace, const char *by)
    {
        return ::TextReplace(text, replace, by); // Replace text string (WARNING: memory must be freed!)
    }

    char *TextInsert(const char *text, const char *insert, int position)
    {
        return ::TextInsert(text, insert, position); // Insert text in a position (WARNING: memory must be freed!)
    }

    const char *TextJoin(const char **textList, int count, const char *delimiter)
    {
        return ::TextJoin(textList, count, delimiter); // Join text strings with delimiter
    }

    const char **TextSplit(const char *text, char delimiter, int *count)
    {
        return ::TextSplit(text, delimiter, count); // Split text into multiple strings
    }

    void TextAppend(char *text, const char *append, int *position)
    {
        ::TextAppend(text, append, position); // Append text at specific position and move cursor!
    }

    int TextFindIndex(const char *text, const char *find)
    {
        return ::TextFindIndex(text, find); // Find first text occurrence within a string
    }

    const char *TextToUpper(const char *text)
    {
        return ::TextToUpper(text); // Get upper case version of provided string
    }

    const char *TextToLower(const char *text)
    {
        return ::TextToLower(text); // Get lower case version of provided string
    }

    const char *TextToPascal(const char *text)
    {
        return ::TextToPascal(text); // Get Pascal case notation version of provided string
    }

    int TextToInteger(const char *text)
    {
        return ::TextToInteger(text); // Get integer value from text (negative values not supported)
    }

    // ------------------------------------------------------------------------------------rmodels------------------------------------------------------------------------------------

    void DrawLine3D(Vector3 startPos, Vector3 endPos, Color color)
    {
        ::DrawLine3D(reinterpret_cast<::Vector3 &>(startPos), reinterpret_cast<::Vector3 &>(endPos), reinterpret_cast<::Color &>(color)); // Draw a line in 3D world space
    }

    void DrawPoint3D(Vector3 position, Color color)
    {
        ::DrawPoint3D(reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Color &>(color)); // Draw a point in 3D space, actually a small line
    }

    void DrawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)
    {
        ::DrawCircle3D(reinterpret_cast<::Vector3 &>(center), radius, reinterpret_cast<::Vector3 &>(rotationAxis), rotationAngle, reinterpret_cast<::Color &>(color)); // Draw a circle in 3D world space
    }

    void DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)
    {
        ::DrawTriangle3D(reinterpret_cast<::Vector3 &>(v1), reinterpret_cast<::Vector3 &>(v2), reinterpret_cast<::Vector3 &>(v3), reinterpret_cast<::Color &>(color)); // Draw a color-filled triangle (vertex in counter-clockwise order!)
    }

    void DrawTriangleStrip3D(Vector3 *points, int pointCount, Color color)
    {
        ::DrawTriangleStrip3D(reinterpret_cast<::Vector3 *>(points), pointCount, reinterpret_cast<::Color &>(color)); // Draw a triangle strip defined by points
    }

    void DrawCube(Vector3 position, float width, float height, float length, Color color)
    {
        ::DrawCube(reinterpret_cast<::Vector3 &>(position), width, height, length, reinterpret_cast<::Color &>(color)); // Draw cube
    }

    void DrawCubeV(Vector3 position, Vector3 size, Color color)
    {
        ::DrawCubeV(reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Vector3 &>(size), reinterpret_cast<::Color &>(color)); // Draw cube (Vector version)
    }

    void DrawCubeWires(Vector3 position, float width, float height, float length, Color color)
    {
        ::DrawCubeWires(reinterpret_cast<::Vector3 &>(position), width, height, length, reinterpret_cast<::Color &>(color)); // Draw cube wires
    }

    void DrawCubeWiresV(Vector3 position, Vector3 size, Color color)
    {
        ::DrawCubeWiresV(reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Vector3 &>(size), reinterpret_cast<::Color &>(color)); // Draw cube wires (Vector version)
    }

    void DrawSphere(Vector3 centerPos, float radius, Color color)
    {
        ::DrawSphere(reinterpret_cast<::Vector3 &>(centerPos), radius, reinterpret_cast<::Color &>(color)); // Draw sphere
    }

    void DrawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)
    {
        ::DrawSphereEx(reinterpret_cast<::Vector3 &>(centerPos), radius, rings, slices, reinterpret_cast<::Color &>(color)); // Draw sphere with extended parameters
    }

    void DrawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)
    {
        ::DrawSphereWires(reinterpret_cast<::Vector3 &>(centerPos), radius, rings, slices, reinterpret_cast<::Color &>(color)); // Draw sphere wires
    }

    void DrawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
    {
        ::DrawCylinder(reinterpret_cast<::Vector3 &>(position), radiusTop, radiusBottom, height, slices, reinterpret_cast<::Color &>(color)); // Draw a cylinder/cone
    }

    void DrawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
    {
        ::DrawCylinderEx(reinterpret_cast<::Vector3 &>(startPos), reinterpret_cast<::Vector3 &>(endPos), startRadius, endRadius, sides, reinterpret_cast<::Color &>(color)); // Draw a cylinder with base at startPos and top at endPos
    }

    void DrawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
    {
        ::DrawCylinderWires(reinterpret_cast<::Vector3 &>(position), radiusTop, radiusBottom, height, slices, reinterpret_cast<::Color &>(color)); // Draw a cylinder/cone wires
    }

    void DrawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
    {
        ::DrawCylinderWiresEx(reinterpret_cast<::Vector3 &>(startPos), reinterpret_cast<::Vector3 &>(endPos), startRadius, endRadius, sides, reinterpret_cast<::Color &>(color)); // Draw a cylinder wires with base at startPos and top at endPos
    }

    void DrawCapsule(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)
    {
        ::DrawCapsule(reinterpret_cast<::Vector3 &>(startPos), reinterpret_cast<::Vector3 &>(endPos), radius, slices, rings, reinterpret_cast<::Color &>(color)); // Draw a capsule with the center of its sphere caps at startPos and endPos
    }

    void DrawCapsuleWires(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)
    {
        ::DrawCapsuleWires(reinterpret_cast<::Vector3 &>(startPos), reinterpret_cast<::Vector3 &>(endPos), radius, slices, rings, reinterpret_cast<::Color &>(color)); // Draw capsule wireframe with the center of its sphere caps at startPos and endPos
    }

    void DrawPlane(Vector3 centerPos, Vector2 size, Color color)
    {
        ::DrawPlane(reinterpret_cast<::Vector3 &>(centerPos), reinterpret_cast<::Vector2 &>(size), reinterpret_cast<::Color &>(color)); // Draw a plane XZ
    }

    void DrawRay(Ray ray, Color color)
    {
        ::DrawRay(reinterpret_cast<::Ray &>(ray), reinterpret_cast<::Color &>(color)); // Draw a ray line
    }

    void DrawGrid(int slices, float spacing)
    {
        ::DrawGrid(slices, spacing); // Draw a grid (centered at (0, 0, 0))
    }

    Model LoadModel(const char *fileName)
    {
        ::Model temp = ::LoadModel(fileName);
        return reinterpret_cast<Model &>(temp);
    }

    Model LoadModelFromMesh(Mesh mesh)
    {
        ::Model temp = ::LoadModelFromMesh(reinterpret_cast<::Mesh &>(mesh));
        return reinterpret_cast<Model &>(temp);
    }

    bool IsModelReady(Model model)
    {
        return ::IsModelReady(reinterpret_cast<::Model &>(model)); // Check if a model is ready
    }

    void UnloadModel(Model model)
    {
        ::UnloadModel(reinterpret_cast<::Model &>(model)); // Unload model (including meshes) from memory (RAM and/or VRAM)
    }

    BoundingBox GetModelBoundingBox(Model model)
    {
        ::BoundingBox temp = ::GetModelBoundingBox(reinterpret_cast<::Model &>(model));
        return reinterpret_cast<BoundingBox &>(temp);
    }

    void DrawModel(Model model, Vector3 position, float scale, Color tint)
    {
        ::DrawModel(reinterpret_cast<::Model &>(model), reinterpret_cast<::Vector3 &>(position), scale, reinterpret_cast<::Color &>(tint)); // Draw a model (with texture if set)
    }

    void DrawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
    {
        ::DrawModelEx(reinterpret_cast<::Model &>(model), reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Vector3 &>(rotationAxis), rotationAngle, reinterpret_cast<::Vector3 &>(scale), reinterpret_cast<::Color &>(tint)); // Draw a model with extended parameters
    }

    void DrawModelWires(Model model, Vector3 position, float scale, Color tint)
    {
        ::DrawModelWires(reinterpret_cast<::Model &>(model), reinterpret_cast<::Vector3 &>(position), scale, reinterpret_cast<::Color &>(tint)); // Draw a model wires (with texture if set)
    }

    void DrawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
    {
        ::DrawModelWiresEx(reinterpret_cast<::Model &>(model), reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Vector3 &>(rotationAxis), rotationAngle, reinterpret_cast<::Vector3 &>(scale), reinterpret_cast<::Color &>(tint)); // Draw a model wires (with texture if set) with extended parameters
    }

    void DrawBoundingBox(BoundingBox box, Color color)
    {
        ::DrawBoundingBox(reinterpret_cast<::BoundingBox &>(box), reinterpret_cast<::Color &>(color)); // Draw bounding box (wires)
    }

    void DrawBillboard(Camera camera, Texture2D texture, Vector3 position, float size, Color tint)
    {
        ::DrawBillboard(reinterpret_cast<::Camera &>(camera), reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Vector3 &>(position), size, reinterpret_cast<::Color &>(tint)); // Draw a billboard texture
    }

    void DrawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint)
    {
        ::DrawBillboardRec(reinterpret_cast<::Camera &>(camera), reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Rectangle &>(source), reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Vector2 &>(size), reinterpret_cast<::Color &>(tint)); // Draw a billboard texture defined by source
    }

    void DrawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint)
    {
        ::DrawBillboardPro(reinterpret_cast<::Camera &>(camera), reinterpret_cast<::Texture2D &>(texture), reinterpret_cast<::Rectangle &>(source), reinterpret_cast<::Vector3 &>(position), reinterpret_cast<::Vector3 &>(up), reinterpret_cast<::Vector2 &>(size), reinterpret_cast<::Vector2 &>(origin), rotation, reinterpret_cast<::Color &>(tint)); // Draw a billboard texture defined by source and rotation
    }

    void UploadMesh(Mesh *mesh, bool dynamic)
    {
        ::UploadMesh(reinterpret_cast<::Mesh *>(mesh), dynamic); // Upload mesh vertex data in GPU and provide VAO/VBO ids
    }

    void UpdateMeshBuffer(Mesh mesh, int index, const void *data, int dataSize, int offset)
    {
        ::UpdateMeshBuffer(reinterpret_cast<::Mesh &>(mesh), index, data, dataSize, offset); // Update mesh vertex data in GPU for a specific buffer index
    }

    void UnloadMesh(Mesh mesh)
    {
        ::UnloadMesh(reinterpret_cast<::Mesh &>(mesh)); // Unload mesh data from CPU and GPU
    }

    void DrawMesh(Mesh mesh, Material material, Matrix transform)
    {
        ::DrawMesh(reinterpret_cast<::Mesh &>(mesh), reinterpret_cast<::Material &>(material), reinterpret_cast<::Matrix &>(transform)); // Draw a 3d mesh with material and transform
    }

    void DrawMeshInstanced(Mesh mesh, Material material, const Matrix *transforms, int instances)
    {
        ::DrawMeshInstanced(reinterpret_cast<::Mesh &>(mesh), reinterpret_cast<::Material &>(material), reinterpret_cast<const ::Matrix *>(transforms), instances); // Draw multiple mesh instances with material and different transforms
    }

    bool ExportMesh(Mesh mesh, const char *fileName)
    {
        return ::ExportMesh(reinterpret_cast<::Mesh &>(mesh), fileName); // Export mesh data to file, returns true on success
    }

    BoundingBox GetMeshBoundingBox(Mesh mesh)
    {
        ::BoundingBox temp = ::GetMeshBoundingBox(reinterpret_cast<::Mesh &>(mesh));
        return reinterpret_cast<BoundingBox &>(temp);
    }

    void GenMeshTangents(Mesh *mesh)
    {
        ::GenMeshTangents(reinterpret_cast<::Mesh *>(mesh)); // Compute mesh tangents
    }

    Mesh GenMeshPoly(int sides, float radius)
    {
        ::Mesh temp = ::GenMeshPoly(sides, radius);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshPlane(float width, float length, int resX, int resZ)
    {
        ::Mesh temp = ::GenMeshPlane(width, length, resX, resZ);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshCube(float width, float height, float length)
    {
        ::Mesh temp = ::GenMeshCube(width, height, length);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshSphere(float radius, int rings, int slices)
    {
        ::Mesh temp = ::GenMeshSphere(radius, rings, slices);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshHemiSphere(float radius, int rings, int slices)
    {
        ::Mesh temp = ::GenMeshHemiSphere(radius, rings, slices);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshCylinder(float radius, float height, int slices)
    {
        ::Mesh temp = ::GenMeshCylinder(radius, height, slices);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshCone(float radius, float height, int slices)
    {
        ::Mesh temp = ::GenMeshCone(radius, height, slices);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshTorus(float radius, float size, int radSeg, int sides)
    {
        ::Mesh temp = ::GenMeshTorus(radius, size, radSeg, sides);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshKnot(float radius, float size, int radSeg, int sides)
    {
        ::Mesh temp = ::GenMeshKnot(radius, size, radSeg, sides);
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshHeightmap(Image heightmap, Vector3 size)
    {
        ::Mesh temp = ::GenMeshHeightmap(reinterpret_cast<::Image &>(heightmap), reinterpret_cast<::Vector3 &>(size));
        return reinterpret_cast<Mesh &>(temp);
    }

    Mesh GenMeshCubicmap(Image cubicmap, Vector3 cubeSize)
    {
        ::Mesh temp = ::GenMeshCubicmap(reinterpret_cast<::Image &>(cubicmap), reinterpret_cast<::Vector3 &>(cubeSize));
        return reinterpret_cast<Mesh &>(temp);
    }

    Material *LoadMaterials(const char *fileName, int *materialCount)
    {
        ::Material *temp = ::LoadMaterials(fileName, materialCount);
        return reinterpret_cast<Material *>(temp);
    }

    Material LoadMaterialDefault(void)
    {
        ::Material temp = ::LoadMaterialDefault();
        return reinterpret_cast<Material &>(temp);
    }

    bool IsMaterialReady(Material material)
    {
        return ::IsMaterialReady(reinterpret_cast<::Material &>(material)); // Check if a material is ready
    }

    void UnloadMaterial(Material material)
    {
        ::UnloadMaterial(reinterpret_cast<::Material &>(material)); // Unload material from GPU memory (VRAM)
    }

    void SetMaterialTexture(Material *material, int mapType, Texture2D texture)
    {
        ::SetMaterialTexture(reinterpret_cast<::Material *>(material), mapType, reinterpret_cast<::Texture2D &>(texture)); // Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
    }

    void SetModelMeshMaterial(Model *model, int meshId, int materialId)
    {
        ::SetModelMeshMaterial(reinterpret_cast<::Model *>(model), meshId, materialId); // Set material for a mesh
    }

    ModelAnimation *LoadModelAnimations(const char *fileName, int *animCount)
    {
        ::ModelAnimation *temp = ::LoadModelAnimations(fileName, animCount);
        return reinterpret_cast<ModelAnimation *>(temp);
    }

    void UpdateModelAnimation(Model model, ModelAnimation anim, int frame)
    {
        ::UpdateModelAnimation(reinterpret_cast<::Model &>(model), reinterpret_cast<::ModelAnimation &>(anim), frame); // Update model animation pose
    }

    void UnloadModelAnimation(ModelAnimation anim)
    {
        ::UnloadModelAnimation(reinterpret_cast<::ModelAnimation &>(anim)); // Unload animation data
    }

    void UnloadModelAnimations(ModelAnimation *animations, int animCount)
    {
        ::UnloadModelAnimations(reinterpret_cast<::ModelAnimation *>(animations), animCount); // Unload animation array data
    }

    bool IsModelAnimationValid(Model model, ModelAnimation anim)
    {
        return ::IsModelAnimationValid(reinterpret_cast<::Model &>(model), reinterpret_cast<::ModelAnimation &>(anim)); // Check model animation skeleton match
    }

    bool CheckCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)
    {
        return ::CheckCollisionSpheres(reinterpret_cast<::Vector3 &>(center1), radius1, reinterpret_cast<::Vector3 &>(center2), radius2); // Check collision between two spheres
    }

    bool CheckCollisionBoxes(BoundingBox box1, BoundingBox box2)
    {
        return ::CheckCollisionBoxes(reinterpret_cast<::BoundingBox &>(box1), reinterpret_cast<::BoundingBox &>(box2)); // Check collision between two bounding boxes
    }

    bool CheckCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)
    {
        return ::CheckCollisionBoxSphere(reinterpret_cast<::BoundingBox &>(box), reinterpret_cast<::Vector3 &>(center), radius); // Check collision between box and sphere
    }

    RayCollision GetRayCollisionSphere(Ray ray, Vector3 center, float radius)
    {
        ::RayCollision temp = ::GetRayCollisionSphere(reinterpret_cast<::Ray &>(ray), reinterpret_cast<::Vector3 &>(center), radius);
        return reinterpret_cast<RayCollision &>(temp);
    }

    RayCollision GetRayCollisionBox(Ray ray, BoundingBox box)
    {
        ::RayCollision temp = ::GetRayCollisionBox(reinterpret_cast<::Ray &>(ray), reinterpret_cast<::BoundingBox &>(box));
        return reinterpret_cast<RayCollision &>(temp);
    }

    RayCollision GetRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform)
    {
        ::RayCollision temp = ::GetRayCollisionMesh(reinterpret_cast<::Ray &>(ray), reinterpret_cast<::Mesh &>(mesh), reinterpret_cast<::Matrix &>(transform));
        return reinterpret_cast<RayCollision &>(temp);
    }

    RayCollision GetRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)
    {
        ::RayCollision temp = ::GetRayCollisionTriangle(reinterpret_cast<::Ray &>(ray), reinterpret_cast<::Vector3 &>(p1), reinterpret_cast<::Vector3 &>(p2), reinterpret_cast<::Vector3 &>(p3));
        return reinterpret_cast<RayCollision &>(temp);
    }

    RayCollision GetRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)
    {
        ::RayCollision temp = ::GetRayCollisionQuad(reinterpret_cast<::Ray &>(ray), reinterpret_cast<::Vector3 &>(p1), reinterpret_cast<::Vector3 &>(p2), reinterpret_cast<::Vector3 &>(p3), reinterpret_cast<::Vector3 &>(p4));
        return reinterpret_cast<RayCollision &>(temp);
    }

    // ----------------------------------------------------------------------------------raudio----------------------------------------------------------------------------------

    void InitAudioDevice(void)
    {
        ::InitAudioDevice(); // Initialize audio device and context
    }

    void CloseAudioDevice(void)
    {
        ::CloseAudioDevice(); // Close the audio device and context
    }

    bool IsAudioDeviceReady(void)
    {
        return ::IsAudioDeviceReady(); // Check if audio device has been initialized successfully
    }

    void SetMasterVolume(float volume)
    {
        ::SetMasterVolume(volume); // Set master volume (listener)
    }

    float GetMasterVolume(void)
    {
        return ::GetMasterVolume(); // Get master volume (listener)
    }

    Wave LoadWave(const char *fileName)
    {
        ::Wave temp = ::LoadWave(fileName);
        return reinterpret_cast<Wave &>(temp);
    }

    Wave LoadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize)
    {
        ::Wave temp = ::LoadWaveFromMemory(fileType, fileData, dataSize);
        return reinterpret_cast<Wave &>(temp);
    }

    bool IsWaveReady(Wave wave)
    {
        return ::IsWaveReady(reinterpret_cast<::Wave &>(wave)); // Checks if wave data is ready
    }

    Sound LoadSound(const char *fileName)
    {
        ::Sound temp = ::LoadSound(fileName);
        return reinterpret_cast<Sound &>(temp);
    }

    Sound LoadSoundFromWave(Wave wave)
    {
        ::Sound temp = ::LoadSoundFromWave(reinterpret_cast<::Wave &>(wave));
        return reinterpret_cast<Sound &>(temp);
    }

    Sound LoadSoundAlias(Sound source)
    {
        ::Sound temp = ::LoadSoundAlias(reinterpret_cast<::Sound &>(source));
        return reinterpret_cast<Sound &>(temp);
    }

    bool IsSoundReady(Sound sound)
    {
        return ::IsSoundReady(reinterpret_cast<::Sound &>(sound)); // Checks if a sound is ready
    }

    void UpdateSound(Sound sound, const void *data, int sampleCount)
    {
        ::UpdateSound(reinterpret_cast<::Sound &>(sound), data, sampleCount); // Update sound buffer with new data
    }

    void UnloadWave(Wave wave)
    {
        ::UnloadWave(reinterpret_cast<::Wave &>(wave)); // Unload wave data
    }

    void UnloadSound(Sound sound)
    {
        ::UnloadSound(reinterpret_cast<::Sound &>(sound)); // Unload sound
    }

    void UnloadSoundAlias(Sound alias)
    {
        ::UnloadSoundAlias(reinterpret_cast<::Sound &>(alias)); // Unload a sound alias (does not deallocate sample data)
    }

    bool ExportWave(Wave wave, const char *fileName)
    {
        return ::ExportWave(reinterpret_cast<::Wave &>(wave), fileName); // Export wave data to file, returns true on success
    }

    bool ExportWaveAsCode(Wave wave, const char *fileName)
    {
        return ::ExportWaveAsCode(reinterpret_cast<::Wave &>(wave), fileName); // Export wave sample data to code (.h), returns true on success
    }

    void PlaySound(Sound sound)
    {
        ::PlaySound(reinterpret_cast<::Sound &>(sound)); // Play a sound
    }

    void StopSound(Sound sound)
    {
        ::StopSound(reinterpret_cast<::Sound &>(sound)); // Stop playing a sound
    }

    void PauseSound(Sound sound)
    {
        ::PauseSound(reinterpret_cast<::Sound &>(sound)); // Pause a sound
    }

    void ResumeSound(Sound sound)
    {
        ::ResumeSound(reinterpret_cast<::Sound &>(sound)); // Resume a paused sound
    }

    bool IsSoundPlaying(Sound sound)
    {
        return ::IsSoundPlaying(reinterpret_cast<::Sound &>(sound)); // Check if a sound is currently playing
    }

    void SetSoundVolume(Sound sound, float volume)
    {
        ::SetSoundVolume(reinterpret_cast<::Sound &>(sound), volume); // Set volume for a sound (1.0 is max level)
    }

    void SetSoundPitch(Sound sound, float pitch)
    {
        ::SetSoundPitch(reinterpret_cast<::Sound &>(sound), pitch); // Set pitch for a sound (1.0 is base level)
    }

    void SetSoundPan(Sound sound, float pan)
    {
        ::SetSoundPan(reinterpret_cast<::Sound &>(sound), pan); // Set pan for a sound (0.5 is center)
    }

    Wave WaveCopy(Wave wave)
    {
        ::Wave temp = WaveCopy(reinterpret_cast<::Wave &>(wave));
        return reinterpret_cast<Wave &>(temp);
    }

    void WaveCrop(Wave *wave, int initSample, int finalSample)
    {
        ::WaveCrop(reinterpret_cast<::Wave *>(wave), initSample, finalSample); // Crop a wave to defined samples range
    }

    void WaveFormat(Wave *wave, int sampleRate, int sampleSize, int channels)
    {
        ::WaveFormat(reinterpret_cast<::Wave *>(wave), sampleRate, sampleSize, channels); // Convert wave data to desired format
    }

    float *LoadWaveSamples(Wave wave)
    {
        return ::LoadWaveSamples(reinterpret_cast<::Wave &>(wave)); // Load samples data from wave as a 32bit float data array
    }

    void UnloadWaveSamples(float *samples)
    {
        ::UnloadWaveSamples(samples); // Unload samples data loaded with LoadWaveSamples()
    }

    Music LoadMusicStream(const char *fileName)
    {
        ::Music temp = ::LoadMusicStream(fileName);
        return reinterpret_cast<Music &>(temp);
    }

    Music LoadMusicStreamFromMemory(const char *fileType, const unsigned char *data, int dataSize)
    {
        ::Music temp = ::LoadMusicStreamFromMemory(fileType, data, dataSize);
        return reinterpret_cast<Music &>(temp);
    }

    bool IsMusicReady(Music music)
    {
        return ::IsMusicReady(reinterpret_cast<::Music &>(music)); // Checks if a music stream is ready
    }

    void UnloadMusicStream(Music music)
    {
        ::UnloadMusicStream(reinterpret_cast<::Music &>(music)); // Unload music stream
    }

    void PlayMusicStream(Music music)
    {
        ::PlayMusicStream(reinterpret_cast<::Music &>(music)); // Start music playing
    }

    bool IsMusicStreamPlaying(Music music)
    {
        return ::IsMusicStreamPlaying(reinterpret_cast<::Music &>(music)); // Check if music is playing
    }

    void UpdateMusicStream(Music music)
    {
        ::UpdateMusicStream(reinterpret_cast<::Music &>(music)); // Updates buffers for music streaming
    }

    void StopMusicStream(Music music)
    {
        ::StopMusicStream(reinterpret_cast<::Music &>(music)); // Stop music playing
    }

    void PauseMusicStream(Music music)
    {
        ::PauseMusicStream(reinterpret_cast<::Music &>(music)); // Pause music playing
    }

    void ResumeMusicStream(Music music)
    {
        ::ResumeMusicStream(reinterpret_cast<::Music &>(music)); // Resume playing paused music
    }

    void SeekMusicStream(Music music, float position)
    {
        ::SeekMusicStream(reinterpret_cast<::Music &>(music), position); // Seek music to a position (in seconds)
    }

    void SetMusicVolume(Music music, float volume)
    {
        ::SetMusicVolume(reinterpret_cast<::Music &>(music), volume); // Set volume for music (1.0 is max level)
    }

    void SetMusicPitch(Music music, float pitch)
    {
        ::SetMusicPitch(reinterpret_cast<::Music &>(music), pitch); // Set pitch for a music (1.0 is base level)
    }

    void SetMusicPan(Music music, float pan)
    {
        ::SetMusicPan(reinterpret_cast<::Music &>(music), pan); // Set pan for a music (0.5 is center)
    }

    float GetMusicTimeLength(Music music)
    {
        return ::GetMusicTimeLength(reinterpret_cast<::Music &>(music)); // Get music time length (in seconds)
    }

    float GetMusicTimePlayed(Music music)
    {
        return ::GetMusicTimePlayed(reinterpret_cast<::Music &>(music)); // Get current music time played (in seconds)
    }

    AudioStream LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
    {
        ::AudioStream temp = ::LoadAudioStream(sampleRate, sampleSize, channels);
        return reinterpret_cast<AudioStream &>(temp);
    }

    bool IsAudioStreamReady(AudioStream stream)
    {
        return ::IsAudioStreamReady(reinterpret_cast<::AudioStream &>(stream)); // Checks if an audio stream is ready
    }

    void UnloadAudioStream(AudioStream stream)
    {
        ::UnloadAudioStream(reinterpret_cast<::AudioStream &>(stream)); // Unload audio stream and free memory
    }

    void UpdateAudioStream(AudioStream stream, const void *data, int frameCount)
    {
        ::UpdateAudioStream(reinterpret_cast<::AudioStream &>(stream), data, frameCount); // Update audio stream buffers with data
    }

    bool IsAudioStreamProcessed(AudioStream stream)
    {
        return ::IsAudioStreamProcessed(reinterpret_cast<::AudioStream &>(stream)); // Check if any audio stream buffers requires refill
    }

    void PlayAudioStream(AudioStream stream)
    {
        ::PlayAudioStream(reinterpret_cast<::AudioStream &>(stream)); // Play audio stream
    }

    void PauseAudioStream(AudioStream stream)
    {
        ::PauseAudioStream(reinterpret_cast<::AudioStream &>(stream)); // Pause audio stream
    }

    void ResumeAudioStream(AudioStream stream)
    {
        ::ResumeAudioStream(reinterpret_cast<::AudioStream &>(stream)); // Resume audio stream
    }

    bool IsAudioStreamPlaying(AudioStream stream)
    {
        return ::IsAudioStreamPlaying(reinterpret_cast<::AudioStream &>(stream)); // Check if audio stream is playing
    }

    void StopAudioStream(AudioStream stream)
    {
        ::StopAudioStream(reinterpret_cast<::AudioStream &>(stream)); // Stop audio stream
    }

    void SetAudioStreamVolume(AudioStream stream, float volume)
    {
        ::SetAudioStreamVolume(reinterpret_cast<::AudioStream &>(stream), volume); // Set volume for audio stream (1.0 is max level)
    }

    void SetAudioStreamPitch(AudioStream stream, float pitch)
    {
        ::SetAudioStreamPitch(reinterpret_cast<::AudioStream &>(stream), pitch); // Set pitch for audio stream (1.0 is base level)
    }

    void SetAudioStreamPan(AudioStream stream, float pan)
    {
        ::SetAudioStreamPan(reinterpret_cast<::AudioStream &>(stream), pan); // Set pan for audio stream (0.5 is centered)
    }

    void SetAudioStreamBufferSizeDefault(int size)
    {
        ::SetAudioStreamBufferSizeDefault(size); // Default size for new audio streams
    }

    void SetAudioStreamCallback(AudioStream stream, AudioCallback callback)
    {
        ::SetAudioStreamCallback(reinterpret_cast<::AudioStream &>(stream), reinterpret_cast<::AudioCallback &>(callback)); // Audio thread callback to request new data
    }

    void AttachAudioStreamProcessor(AudioStream stream, AudioCallback processor)
    {
        ::AttachAudioStreamProcessor(reinterpret_cast<::AudioStream &>(stream), reinterpret_cast<::AudioCallback &>(processor)); // Attach audio stream processor to stream, receives the samples as <float>s
    }

    void DetachAudioStreamProcessor(AudioStream stream, AudioCallback processor)
    {
        ::DetachAudioStreamProcessor(reinterpret_cast<::AudioStream &>(stream), reinterpret_cast<::AudioCallback &>(processor)); // Detach audio stream processor from stream
    }

    void AttachAudioMixedProcessor(AudioCallback processor)
    {
        ::AttachAudioMixedProcessor(reinterpret_cast<::AudioCallback &>(processor)); // Attach audio stream processor to the entire audio pipeline, receives the samples as <float>s
    }

    void DetachAudioMixedProcessor(AudioCallback processor)
    {
        ::DetachAudioMixedProcessor(reinterpret_cast<::AudioCallback &>(processor)); // Detach audio stream processor from the entire audio pipeline
    }

}
