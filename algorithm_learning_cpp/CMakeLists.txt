cmake_minimum_required(VERSION 3.12)
project(algorithm_learning_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithm_learning_cpp main.cpp leetcode/dynamic_programming/house_robber.cpp leetcode/dynamic_programming/min_cost_climbing_stairs.cpp leetcode/dynamic_programming/steel_cutting.cpp leetcode/dynamic_programming/dp.h leetcode/binary_tree/bt.h leetcode/binary_tree/invert_binary_tree.cpp)