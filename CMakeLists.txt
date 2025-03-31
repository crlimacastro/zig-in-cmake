cmake_minimum_required(VERSION 3.29)

include(FetchContent)

project(test VERSION 0.0.1 LANGUAGES CXX)

set(TEST_LIBS)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 5.5
    URL_HASH SHA256=c1ab645ca298a2801097931d1079b10ff7eb9df8
)
FetchContent_MakeAvailable(raylib)
list(APPEND TEST_LIBS raylib)

add_executable(test main.cpp)
target_link_libraries(test PRIVATE ${TEST_LIBS})
