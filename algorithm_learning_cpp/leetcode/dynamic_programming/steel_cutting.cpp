//
// Created by 姚文锋 on 2018/7/31.
//
// 算法导论书上的钢条切割问题
#include "dp.h"
using namespace std;

int dynamicProgramming::cutRod(int n) {
    // 第一个0是不要的
    vector<int>cost = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    if (n == 0) return 0;
    for (int i=1;i<cost.size();i++) {

    }
    return 0;
}
