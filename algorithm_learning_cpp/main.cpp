#include <iostream>
#include <vector>
#include "leetcode/dynamic_programming/dp.h"
#include "leetcode/binary_tree/bt.h"

using namespace std;

int main() {

//    dynamicProgramming dynamicProgramming1;
//    vector<int>a = {2,1,3,1,1,2};
//    int b = dynamicProgramming1.houseRobber(a);
//    vector<int>a = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
//    int b = dynamicProgramming1.minCostClimbingStairs(a);
//    int memo[11] = {};
//    int b = dynamicProgramming1.cutRod(memo, 4);
//    cout << b;

    binaryTree binaryTree1;
    TreeNode *root = NULL;
//    root->val = 4;
    TreeNode *root1 = binaryTree1.invertTree(root);
    cout << root1;
    return 0;
}
