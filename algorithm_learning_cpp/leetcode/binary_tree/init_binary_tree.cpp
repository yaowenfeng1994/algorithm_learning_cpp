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
    vector<int*> listP(list.size());
    vector<TreeNode*> listNodeP(list.size());
    for (int i=0;i<list.size();i++)
    {
        listP[i] = &list[i];
//        cout << listP[i] << endl;
    }
    TreeNode* node;
    node->val = list[0];
//    cout << node->val << endl;
//    for (int j=0;j<listP.size();j++)
//    {
//        node->val = list[j];
//        cout << node->val <<endl;
//        if (2*j>listP.size())
//        {
//            node->left = NULL;
//        }
//        else
//        {
//            node->left = *listP[2*j];
//        }
//        if ((2*j+1)>listP.size())
//        {
//            node->right = NULL;
//        }
//        else
//        {
//            node->right = *listP[2*j+1];
//        }
//    }
    return NULL;
}
