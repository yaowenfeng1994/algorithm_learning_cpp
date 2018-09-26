//
// Created by 姚文锋 on 2018/9/25.
//
//145. 二叉树的后序遍历
#include "bt.h"
using namespace std;

vector<int> binaryTree::postorderTraversal(TreeNode* root)
{
#if 1
    // 递归版本
    if (root == NULL)
    {
        return list;
    }
    if (root->left != NULL)
    {
        postorderTraversal(root->left);
    }
    if (root->right != NULL)
    {
        postorderTraversal(root->right);
    }
    list.push_back(root->val);
    return list;
#endif
#if 0

#endif
}