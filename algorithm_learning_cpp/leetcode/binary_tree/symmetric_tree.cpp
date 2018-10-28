//
// Created by 姚文锋 on 2018/9/29.
//
//101. 对称二叉树
#include "bt.h"
using namespace std;

bool Symmetric(TreeNode *left, TreeNode *right){
    if (!left && !right)
        return true;
    if (!left || !right)
        return false;
    if (left->val == right->val){
        return (Symmetric(left->left, right->right) && Symmetric(right->left, left->right));
    }
    return false;
}

bool binaryTree::isSymmetric(TreeNode* root)
{
    if (!root)
        return true;
    return Symmetric(root->left, root->right);
}

/*
https://blog.csdn.net/qq_34987437/article/details/80877708
深度，广度，递归解法
 */
