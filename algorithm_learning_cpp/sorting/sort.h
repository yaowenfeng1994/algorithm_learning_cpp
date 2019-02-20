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
    // 构造函数
    Sort();
    // 析构函数
    ~Sort();

private:
    int epoll_fd = 100;
    static int listen_fd;
public:
    vector<int> quickSort(vector<int> &list,int start,int end);
    vector<int> insertSort(vector<int> &list);

    static int funcStatic(int a, int b){
        listen_fd = a+b;
        return listen_fd;
    }

    int funcPublic(){
        epoll_fd = epoll_fd - 1;
        return epoll_fd;
    }
};

#endif //ALGORITHM_LEARNING_CPP_SORT_H
