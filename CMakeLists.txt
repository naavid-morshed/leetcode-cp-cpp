cmake_minimum_required(VERSION 3.30)
project(leetcode_cp_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(leetcode_cp_cpp main.cpp
        leetcode/2914/Sol2914.h
        leetcode/9999/Sol9999.h
        "neetcode leetcode/26/Sol26.h"
        "neetcode leetcode/27/Sol27.h"
        "neetcode leetcode/27/Sol27Alt.h"
        "neetcode/designing dynamic array/SolDynamicArray.cpp"
        "neetcode/designing dynamic array/DynamicArray.h"
        "neetcode/designing dynamic array/DynamicArray.h"
        "neetcode leetcode/1929/Sol1929.h"
        "neetcode leetcode/1929/Sol1929Alt.h")
