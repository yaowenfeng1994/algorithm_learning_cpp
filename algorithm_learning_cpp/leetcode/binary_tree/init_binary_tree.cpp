//
// Created by 姚文锋 on 2018/8/19 0019.
//
//二叉树的初始化
#include "bt.h"
using namespace std;

TreeNode* binaryTree::initTree(vector<int> &list)
{
    if (list.size() < 1)
    {
        return NULL;
    }
    TreeNode *root = new TreeNode;
    vector<TreeNode*> listNode(list.size()+1);
    listNode[0] = NULL;
    for (int i=1;i<=list.size();i++)
    {
        if (i==1)
        {
            root->val = list[i-1];
            listNode[i] = root;
        } else {
            TreeNode *node = new TreeNode;
            node->val = list[i-1];
            listNode[i] = node;
        }
    }

    for (int j=1;j<listNode.size();j++)
    {
        if (2*j>listNode.size()-1)
        {
            listNode[j]->left = NULL;
        }
        else
        {
            listNode[j]->left = listNode[2*j];
        }
        if ((2*j+1)>listNode.size()-1)
        {
            listNode[j]->right = NULL;
        }
        else
        {
            listNode[j]->right = listNode[2*j+1];
        }
    }
    return root;
}
