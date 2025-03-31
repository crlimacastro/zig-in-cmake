# zig in CMake example

An example of how to build a C++ program using zig as a compiler and CMake as the build system.

# Dependencies

- [cmake](https://cmake.org/)
- [zig](https://ziglang.org/)

# Usage

Build easily using CMake workflows!

```
cmake --workflow --preset default
```

Your executable will be in the `build` directory.

Otherwise build manually:

```
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE="zig-toolchain.cmake"
cmake --build build
```