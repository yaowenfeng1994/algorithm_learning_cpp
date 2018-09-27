//
// Created by 姚文锋 on 2018/9/26.
//
//102. 二叉树的层次遍历
#include "bt.h"
using namespace std;

vector<vector<int>> binaryTree::levelOrder(TreeNode* root)
{
    vector<vector<int>> vec;
    if(root == nullptr)
        return vec;
    queue<TreeNode*> root_queue;
    root_queue.push(root);
    while (!root_queue.empty()) {
        unsigned long count=root_queue.size();
        vector<int> vec_temp;
        while(count--){
            TreeNode* temp=root_queue.front();
            root_queue.pop();
            vec_temp.push_back(temp->val);

            if(temp->left){
                root_queue.push(temp->left);
            }

            if(temp->right){
                root_queue.push(temp->right);
            }
        }
        vec.push_back(vec_temp);
    }
    return vec;
}