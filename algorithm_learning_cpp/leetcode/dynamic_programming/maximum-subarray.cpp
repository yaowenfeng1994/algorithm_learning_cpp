//
// Created by 姚文锋 on 2018/9/16.
//
//53. 最大子序和
#include "dp.h"
using namespace std;

int dynamicProgramming::maxSubArray(vector<int>& nums) {
    // O(n)
    if (nums.empty()) return 0;
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        dp[i] = max(nums[i], dp[i-1] + nums[i]);

    }
    int res = dp[0];
    for (int j = 1; j < dp.size(); j++) {
        res = max(res, dp[j]);
    }
    return res;
}
