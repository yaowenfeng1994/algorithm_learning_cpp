#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "leetcode/dynamic_programming/dp.h"
#include "leetcode/binary_tree/bt.h"
#include "leetcode/hash_table/ht.h"
#include "sorting/sort.h"

using namespace std;
int Sort::listen_fd = 0;

template<typename T>
T max1(T a, T b) {
    return a < b ? b : a;
}

void change(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
    cout << &a << endl;
}

int main() {
//    int a=5; int b =3;
//    change(a, b);
//    cout << &a << endl;
//    cout << b << endl;
    int a = 0;
    vector<int *> av;
    for (int i = 0; i < 5; i++) {
        a ++;
        av.push_back(&a);
    }
    for (int j = 0; j < 5; j++) {
        printf("%d\n", *av[j]);
    }

//    double d = max1<int>(1.2, 2.4);
//    cout << d << endl;
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

//    binaryTree binaryTree1;
//    vector<int> list = {2, 3, 3};
//    TreeNode *root1 = binaryTree1.initTree(list);

//    binaryTree1.invertTree(root1);
//    vector<int>list1 = binaryTree1.inorderTraversal(root1);
//    vector<int>list1 = binaryTree1.preorderTraversal(root1);
//    vector<int>list1 = binaryTree1.postorderTraversal(root1);
//    for (vector<int>::iterator iter=list1.begin();iter!=list1.end();iter++)
//    {
//        cout << *iter << endl;
//    }

//    vector<vector<int>>list1 = binaryTree1.levelOrder(root1);
//    for (vector<vector<int>>::iterator iter=list1.begin();iter!=list1.end();iter++)
//    {
//        vector<int>list2 = *iter;
//        for (vector<int>::iterator iter1=list2.begin();iter1!=list2.end();iter1++)
//        {
//            cout << *iter1 << ", ";
//        }
//        cout << endl;
//    }

//    bool result = binaryTree1.isSymmetric(root1);
//    cout << result << endl;

//    Sort sort1;
//    vector<int> list = {2, 8, 7, 1, 3, 5, 6, 4, 6};
//    vector<int> newList = sort1.quickSort(list, 0, int(list.size() - 1));
//    vector<int>newList = sort1.insertSort(list);
//    for (int i = 0; i < newList.size(); i++) {
//        cout << newList[i] << endl;
//    }
//    return 0;

/*    hashTable hashTable1;
    vector<string> wordList = {"adsdf","sfd"};
    vector<string>newWordList = hashTable1.findWords(wordList);
    for (int i=0;i<newWordList.size();i++)
    {
        cout << newWordList[i] << endl;
    }*/

//    __uint32_t events;
//    events = 0|0|0;
//    cout << events << endl;
//
//    bool flag = false;
//    int a = flag ? 1 : 0;
//    cout << a << endl;
//    unsigned char test[1024] = "";
//    char buf[1024] = "";
//    char p[4096] = "dfsd";
//    memcpy(test, a, strlen(a));
//    cout << test[1] << endl;
//    for (int i = 0; i < strlen(a);i++){
//        printf("%d\n", test[i]);
//    }
//    int first = 0x00;
//    int tmp = 0;
//    first = first + 0x80;
//    first = first + 0x1;
//    cout << first << endl;
//    for (int i = 0; i < strlen(p);i++){
//        buf[i]= p[i];
//    }
//    buf[strlen(p)] = '\0';
//    cout << p << endl;
//    cout << strlen(p) << endl;

//    int a = Sort::funcStatic(1, 3);
//    cout << a << endl;
//    Sort *c = new Sort();
//    Sort c;
//    int b = c.funcPublic();
//    cout << b << endl;

}
