#include <iostream>
#include <vector>
#include "leetcode/dynamic_programming/dp.h"
#include "leetcode/binary_tree/bt.h"
#include "leetcode/hash_table/ht.h"
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

/*    binaryTree binaryTree1;
    vector<int>list = {2,4,3,5,7,9,11};
    TreeNode *root1 = binaryTree1.initTree(list);

    binaryTree1.invertTree(root1);
    cout << root1->right->left->val << endl;
    vector<int>list1 = binaryTree1.inorderTraversal(root1);
    for (vector<int>::iterator iter=list1.begin();iter!=list1.end();iter++)
    {
        cout << *iter << endl;
    }

    sort sort1;
    vector<int>list = {2,8,7,1,3,5,6,4,11};
    vector<int>newList = sort1.quickSort(list, 0, list.size()-1);
    vector<int>newList = sort1.insertSort(list);
    for (int i=0;i<newList.size();i++)
    {
        cout << newList[i] << endl;
    }
    return 0;*/
/*    char *a = new char[3];
    a = "hello";
    cout << *a << endl;
    delete []a;
    cout << a << endl;*/

    hashTable hashTable1;
    vector<string> wordList = {"adsdf","sfd"};
    vector<string>newWordList = hashTable1.findWords(wordList);
    for (int i=0;i<newWordList.size();i++)
    {
        cout << newWordList[i] << endl;
    }
}
