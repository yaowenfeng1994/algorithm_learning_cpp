#include <iostream>
#include <vector>
#include "leetcode/dynamic_programming/dp.h"
#include "leetcode/binary_tree/bt.h"
#include "sorting/sort.h"

using namespace std;

int main() {

/*    dynamicProgramming dynamicProgramming1;
    vector<int>a = {2,1,3,1,1,2};
    int b = dynamicProgramming1.houseRobber(a);
    vector<int>a = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    int b = dynamicProgramming1.minCostClimbingStairs(a);
    int memo[11] = {};
    int b = dynamicProgramming1.cutRod(memo, 4);
    cout << b;*/

    binaryTree binaryTree1;
//    TreeNode *root = NULL;
//    TreeNode *root1 = binaryTree1.invertTree(root);
//    cout << root1;
    vector<int>list = {2,1,3,1,1,2};
    TreeNode *root1 = binaryTree1.initTree(list);
    cout << root1;

/*    sort sort1;
    vector<int>list = {2,8,7,1,3,5,6,4,11};
    vector<int>newList = sort1.quickSort(list, 0, list.size()-1);
    for (int i=0;i<newList.size();i++)
    {
        cout << newList[i] << endl;
    }*/
    return 0;
}
