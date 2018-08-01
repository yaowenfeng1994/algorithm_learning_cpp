//
// Created by 姚文锋 on 2018/7/30.
//
//746.使用最小花费爬楼梯
#include "dp.h"
using namespace std;

int dynamicProgramming::minCostClimbingStairs(vector<int> &cost) {
    if (cost.empty()) return 0;
    vector<int> dp (cost.size()+1, 0);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i=2;i<cost.size()+1;i++){
        if (i == cost.size()-1) {
            dp[i] = min(dp[i-2]+cost[i], dp[i-1]);
        } else {
            dp[i] = min(dp[i-2]+cost[i], dp[i-1]+cost[i]);
        }
    }
    return dp[cost.size()-1];
}
