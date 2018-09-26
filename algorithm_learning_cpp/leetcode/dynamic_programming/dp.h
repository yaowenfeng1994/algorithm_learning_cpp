//
// Created by 姚文锋 on 2018/7/31.
//
#ifndef ALGORITHM_LEARNING_CPP_DP_H
#define ALGORITHM_LEARNING_CPP_DP_H
#include <iostream>
#include <vector>
using namespace std;

class dynamicProgramming {
public:
    int houseRobber(vector<int> &nums);
    int minCostClimbingStairs(vector<int>& cost);
    int cutRod(int memo[], int n);
    bool canWinNim(int n);
    int maxSubArray(vector<int>& nums);
    vector<int> countBits(int num);
};


#endif
