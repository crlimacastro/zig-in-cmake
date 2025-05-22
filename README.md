# zig in CMake example

An example of how to build a C++ program using zig as a compiler and CMake as the build system.

# Dependencies

- [cmake](https://cmake.org/)
- [zig](https://ziglang.org/)
- [Ninja](https://ninja-build.org/) (or Make, Visual Studio Generator will not use the zig compiler)

# Usage

Build easily using CMake workflows!

```
cmake --workflow --preset default
```

Your executable will be in the `build` directory.

Otherwise configure & build manually:

```
cmake -S . -B build -G Ninja -DCMAKE_TOOLCHAIN_FILE="zig-toolchain.cmake"
cmake --build build
```