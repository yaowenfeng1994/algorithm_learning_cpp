//
// Created by Yaowenfeng on 2018/7/29.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int> &nums) {
        if (nums.empty()) return 0;
        vector<int> dp(nums.size() + 1, 0);
        cout << "long_size: " << nums.size() << endl;
        dp[1] = nums[0];
        for (int i=1;i<nums.size();i++)
        {
            dp[i+1] = max(dp[i], dp[i-1]+nums[i]);
        }
        return dp[nums.size()];
    }
};

int main() {
    Solution Solution1;
    //申明一个vector
    vector<int> vec;
    vec = {2,1,3,1,1,2};
    Solution1.rob(vec);
}
