#include <iostream>
#include <vector>
#include "leetcode/dynamic_programming/dp.h"
#include "leetcode/binary_tree/bt.h"
#include "leetcode/hash_table/ht.h"
#include "sorting/sort.h"

using namespace std;

int main() {

//    dynamicProgramming dynamicProgramming1;
//    vector<int>a = {-2,1};
//    int b = dynamicProgramming1.houseRobber(a);
//    vector<int>a = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
//    int b = dynamicProgramming1.minCostClimbingStairs(a);
//    int memo[11] = {};
//    int b = dynamicProgramming1.cutRod(memo, 4);
//    cout << b;
//    bool b = dynamicProgramming1.canWinNim(7);
//    cout << b << endl;
//    int b = dynamicProgramming1.maxSubArray(a);
//    cout << b << endl;
//    vector<int>b= dynamicProgramming1.countBits(5);
//    for (int i=0;i<b.size();i++)
//    {
//        cout << b[i] << endl;
//    }

    binaryTree binaryTree1;
    vector<int>list = {2,4,3,5,7,9,11};
    TreeNode *root1 = binaryTree1.initTree(list);

//    binaryTree1.invertTree(root1);
//    vector<int>list1 = binaryTree1.inorderTraversal(root1);
//    vector<int>list1 = binaryTree1.preorderTraversal(root1);
//    vector<int>list1 = binaryTree1.postorderTraversal(root1);
//    for (vector<int>::iterator iter=list1.begin();iter!=list1.end();iter++)
//    {
//        cout << *iter << endl;
//    }

    vector<vector<int>>list1 = binaryTree1.levelOrder(root1);
    for (vector<vector<int>>::iterator iter=list1.begin();iter!=list1.end();iter++)
    {
        vector<int>list2 = *iter;
        for (vector<int>::iterator iter1=list2.begin();iter1!=list2.end();iter1++)
        {
            cout << *iter1 << ", ";
        }
        cout << endl;
    }

/*    sort sort1;
    vector<int>list = {2,8,7,1,3,5,6,4,11};
    vector<int>newList = sort1.quickSort(list, 0, list.size()-1);
    vector<int>newList = sort1.insertSort(list);
    for (int i=0;i<newList.size();i++)
    {
        cout << newList[i] << endl;
    }
    return 0;*/

/*    hashTable hashTable1;
    vector<string> wordList = {"adsdf","sfd"};
    vector<string>newWordList = hashTable1.findWords(wordList);
    for (int i=0;i<newWordList.size();i++)
    {
        cout << newWordList[i] << endl;
    }*/
}
