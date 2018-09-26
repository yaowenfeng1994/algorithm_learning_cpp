//
// Created by 姚文锋 on 2018/8/13 0013.
//
//226. 翻转二叉树
#include "bt.h"
using namespace std;

TreeNode* binaryTree::invertTree(TreeNode* root)
{
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode* tmpRoot;
    tmpRoot = root->left;

    root->left = invertTree(root->right);
    root->right = invertTree(tmpRoot);
    return root;
}
