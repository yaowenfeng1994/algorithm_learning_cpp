cmake_minimum_required(VERSION 3.12)
project(algorithm_learning_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithm_learning_cpp main.cpp leetcode/dynamic_programming/house_robber.cpp
        leetcode/dynamic_programming/min_cost_climbing_stairs.cpp leetcode/dynamic_programming/steel_cutting.cpp
        leetcode/dynamic_programming/dp.h leetcode/binary_tree/bt.h leetcode/binary_tree/invert_binary_tree.cpp
        sorting/sort.h sorting/quick_sort.cpp leetcode/binary_tree/init_binary_tree.cpp
        leetcode/binary_tree/binary_tree_inorder_traversal.cpp
        leetcode/binary_tree/merge_two_binary_trees.cpp sorting/insert_sort.cpp
        leetcode/binary_tree/maximum_depth_of_binary_tree.cpp leetcode/hash_table/ht.h
        leetcode/hash_table/keyboard-row.cpp leetcode/dynamic_programming/nim-game.cpp
        leetcode/dynamic_programming/maximum-subarray.cpp leetcode/dynamic_programming/counting_bits.cpp
        leetcode/binary_tree/binary_tree_preorder_traversal.cpp leetcode/binary_tree/binary_tree_postorder_traversal.cpp
        leetcode/binary_tree/binary_tree_level_order_traversal.cpp leetcode/binary_tree/symmetric_tree.cpp
        sorting/sorting.cpp)