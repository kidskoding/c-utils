cmake_minimum_required(VERSION 3.13)

project(c_utils_tests)

# Enable testing
enable_testing()

# Include FetchContent module
include(FetchContent)

# Download and include Google Test
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Add the test executable
add_executable(strings_test
        include/string_utils.h
        src/string_utils.c
        src/main.c
)

# Link Google Test libraries
target_link_libraries(strings_test gtest gtest_main)
target_include_directories(strings_test PRIVATE include)

# Add tests
add_test(NAME strings_test COMMAND strings_test)