//
// Created by 姚文锋 on 2018/8/22 0022.
//
//94. 二叉树的中序遍历
#include "bt.h"
using namespace std;

vector<int> binaryTree::inorderTraversal(TreeNode* root)
{
#if 0
    // 递归版本
    if (root == NULL)
    {
        return list;
    }
    if (root->left != NULL)
    {
        inorderTraversal(root->left);
    }
    list.push_back(root->val);
    if (root->right != NULL)
    {
        inorderTraversal(root->right);
    }
    return list;
#endif
#if 1
    stack<TreeNode*> stackTree;
    TreeNode *p = root;
    while (p!=NULL || !stackTree.empty())
    {
        while (p!=NULL)
        {
            stackTree.push(p);
            p = p->left;
        }
        if (!stackTree.empty())
        {
            p = stackTree.top();
//            cout<<p->val<<" ";
            list.push_back(p->val);
            stackTree.pop();
            p = p->right;
        }
    }
    return list;
#endif
}

