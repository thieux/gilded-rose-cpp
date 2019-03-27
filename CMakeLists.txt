cmake_minimum_required(VERSION 3.10)
project(gilded-rose)

include_directories($ENV{GMOCK_HOME}/include)
link_directories($ENV{GMOCK_HOME}/lib)

set(CMAKE_CXX_STANDARD 14)

set(sources main.cpp GildedRoseTest.cpp GildedRose.h GildedRose.cpp)
add_executable(GildedRoseTest ${sources})
target_link_libraries(GildedRoseTest gmock)
target_link_libraries(GildedRoseTest gtest)
