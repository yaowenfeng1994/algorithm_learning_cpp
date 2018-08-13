//
// Created by 姚文锋 on 2018/8/13 0013.
//

#ifndef ALGORITHM_LEARNING_CPP_BT_H
#define ALGORITHM_LEARNING_CPP_BT_H
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class binaryTree {
public:
    TreeNode* initTree(TreeNode* root);
    TreeNode* invertTree(TreeNode* root);
};

#endif //ALGORITHM_LEARNING_CPP_BT_H
