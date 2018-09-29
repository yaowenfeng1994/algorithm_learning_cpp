//
// Created by 姚文锋 on 2018/9/29.
//
//112. 路径总和
#include "bt.h"
using namespace std;

int starting = 0;
bool binaryTree::hasPathSum(TreeNode* root, int sum)
{
    if(root==nullptr)
    {
        return false;
    }
    if(root->left==nullptr&&root->right==nullptr&&root->val==sum)
    {
        return true;
    }
    return (hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val));
}