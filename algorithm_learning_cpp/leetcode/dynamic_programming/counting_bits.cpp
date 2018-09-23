//
// Created by 姚文锋 on 2018/9/23.
//
//338. 比特位计数
#include "dp.h"
using namespace std;

int countOnes(int n) {
    int ones = 0;
    while (0 < n) {
        ones += (1&n);
        n >>= 1;
    }
    return ones;
}

vector<int> dynamicProgramming::countBits(int num) {
    vector<int> list;
    vector<int> resultList;
    for(int i = 0;i <= num;i++)
    {
        list.push_back(i);
    }

    for (vector<int>::iterator iter=list.begin();iter!=list.end();iter++)
    {
        cout << *iter << endl;
        int result = countOnes(*iter);
        resultList.push_back(result);
    }
    return resultList;
}