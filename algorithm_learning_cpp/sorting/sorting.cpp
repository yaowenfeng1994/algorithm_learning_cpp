//
// Created by 姚文锋 on 2018/10/18.
//
#include "sort.h"

Sort::Sort():
        epoll_fd(199)
{
    cout << "这里是构造函数: "  << epoll_fd << endl;
}

Sort::~Sort(){
}
