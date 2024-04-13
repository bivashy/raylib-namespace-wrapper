# raylib c++ namespace wrapper

- **Dependencies**
  - [raylib](https://github.com/raysan5/raylib)

`rlw` is the C++ namespace wrapper for raylib. `windows.h` can be used without clashes with raylib as long as `raylib.h` is not in any header or `main.cpp`.

Disclaimer: This is not `raylib-cpp` in a namespace but rather functional C99 `raylib` put into a namespace to be used in C++.

## Usage
```cpp
#include "RaylibWrapper.hpp"

using namespace rlw;

int main() {
    initWindow(800, 600, "game title");
    while (!WindowShouldClose()) {
        BeginDrawing();
        EndDrawing();
    }
    closeWindow();
    return 0;
}
```

### or

```cpp
#include "RaylibWrapper.hpp"

int main() {
    rlw::initWindow(800, 600, "game title");
    while (!rlw::WindowShouldClose()) {
        rlw::BeginDrawing();
        rlw::EndDrawing();
    }
    rlw::closeWindow();
    return 0;
}
```