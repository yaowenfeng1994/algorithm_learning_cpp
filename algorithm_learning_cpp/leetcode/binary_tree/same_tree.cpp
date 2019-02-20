//
// Created by 姚文锋 on 2019/2/16.
//
//100. 相同的树
#include "bt.h"

using namespace std;


bool binaryTree::isSameTree(TreeNode *p, TreeNode *q) {
    if (!p && !q)
        return true;
    if (!p || !q)
        return false;
    if (p->val == q->val) {
        return (isSameTree(p->left, q->left) && isSameTree(q->right, p->right));
    }
    return false;
}