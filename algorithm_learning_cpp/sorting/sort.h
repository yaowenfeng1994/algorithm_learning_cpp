//
// Created by 姚文锋 on 2018/8/18 0018.
//

#ifndef ALGORITHM_LEARNING_CPP_SORT_H
#define ALGORITHM_LEARNING_CPP_SORT_H
#include <iostream>
#include <vector>
using namespace std;

class Sort {
public:
    vector<int> quickSort(vector<int> &list,int start,int end);
    vector<int> insertSort(vector<int> &list);
};

#endif //ALGORITHM_LEARNING_CPP_SORT_H
