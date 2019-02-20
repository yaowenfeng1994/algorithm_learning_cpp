//
// Created by 姚文锋 on 2018/8/18 0018.
//
//算法导论，快速排序
#include "sort.h"
using namespace std;

vector<int> Sort::quickSort(vector<int> &list,int start,int end)
{
    if (start < end)
    {
        int flag = list[end];
        int index = start - 1;
        int tmp;
        for (int j=start;j<end;j++)
        {
            if (list[j]<=flag)
            {
                index+=1;
                tmp=list[index];
                list[index]=list[j];
                list[j]=tmp;
            }
        }
        tmp= list[index+1];
        list[index+1]=list[end];
        list[end]=tmp;
        // newFlag左边的数字全都是小于list[newFlag]，右边全是大于等于
        int newFlag = index+1;
        Sort::quickSort(list, start, newFlag-1);
        Sort::quickSort(list, newFlag+1, end);
        return list;
    }
    return list;
}