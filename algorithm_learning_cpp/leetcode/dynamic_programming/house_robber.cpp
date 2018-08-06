//
// Created by 姚文锋 on 2018/7/29.
//
//198. 打家劫舍
#include "dp.h"
using namespace std;

int dynamicProgramming::houseRobber(vector<int> &nums) {
    if (nums.empty()) return 0;
    vector<int> dp(nums.size() + 1, 0);
    dp[1] = nums[0];
    for (int i=1;i<nums.size();i++)
    {
        dp[i+1] = max(dp[i], dp[i-1]+nums[i]);
    }
    return dp[nums.size()];
}