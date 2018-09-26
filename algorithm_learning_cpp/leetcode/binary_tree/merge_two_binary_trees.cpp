//
// Created by 姚文锋 on 2018/8/25 0025.
//
//617. 合并二叉树
#include "bt.h"
using namespace std;

TreeNode* binaryTree::mergeTrees(TreeNode* t1, TreeNode* t2)
{
    if (t1&&t2)
    {
        t1->val+=t2->val;
        t1->left=mergeTrees(t1->left, t2->left);
        t1->right=mergeTrees(t1->right, t2->right);
        return t1;
    }
    else if (!t1&&t2)
    {
        return t2;
    }
    else if (!t1&&!t2)
    {
        return NULL;
    }
    else
    {
        return t1;
    }
}