cmake_minimum_required(VERSION 3.29)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp)
include_directories(cpp/bits)

add_executable(algorithm
    cpp/0001.two-sum/solution.cpp
    cpp/0003.longest-substring-without-repeating-characters/solution.cpp
    cpp/0011.container-with-most-water/solution.cpp
    cpp/0015.3sum/solution.cpp
    cpp/0049.group-anagrams/solution.cpp
    cpp/0128.longest-consecutive-sequence/solution.cpp
    cpp/0283.move-zeroes/solution.cpp
    cpp/bits/stdc++.h
    cpp/LC_IO.h)
