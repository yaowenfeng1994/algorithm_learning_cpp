//
// Created by 姚文锋 on 2018/8/25 0025.
//
//算法导论，插入排序
#include "sort.h"
using namespace std;

vector<int> Sort::insertSort(vector<int> &list)
{
    int flag, i, j;
    for (i=1;i<list.size();i++)
    {
        flag = list[i];
        j = i - 1;
        while(j>=0 && list[j]>flag)
        {
            list[j+1] = list[j];
            j=j-1;
        }
        list[j+1] = flag;
    }
    return list;
}

