//
// Created by 姚文锋 on 2018/8/13 0013.
//

#ifndef ALGORITHM_LEARNING_CPP_BT_H
#define ALGORITHM_LEARNING_CPP_BT_H
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class binaryTree {
    vector<int> list;
public:
    TreeNode* initTree(vector<int> &list);
    TreeNode* invertTree(TreeNode* root);
    vector<int> inorderTraversal(TreeNode* root);
    vector<int> preorderTraversal(TreeNode* root);
    vector<int> postorderTraversal(TreeNode* root);
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
    int maxDepth(TreeNode* root);
};

#endif //ALGORITHM_LEARNING_CPP_BT_H



