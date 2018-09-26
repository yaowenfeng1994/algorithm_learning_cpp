//
// Created by 姚文锋 on 2018/8/28 0028.
//
//104. 二叉树的最大深度
#include "bt.h"
using namespace std;

int binaryTree::maxDepth(TreeNode* root)
{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return maxDepth(root->left)+1>maxDepth(root->right)+1?maxDepth(root->left)+1:maxDepth(root->right)+1;

    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

