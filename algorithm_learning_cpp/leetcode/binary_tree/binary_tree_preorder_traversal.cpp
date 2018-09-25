//
// Created by 姚文锋 on 2018/9/24.
//
//144. 二叉树的前序遍历
#include "bt.h"
using namespace std;


vector<int> binaryTree::preorderTraversal(TreeNode* root)
{
#if 1
    // 递归版本
    if (root == nullptr) {
        return list;
    }
    list.push_back(root->val);
    if (root->left != nullptr)
    {
        preorderTraversal(root->left);
    }
    if (root->right != nullptr)
    {
        preorderTraversal(root->right);
    }
    return list;
#endif
#if 0

#endif
}