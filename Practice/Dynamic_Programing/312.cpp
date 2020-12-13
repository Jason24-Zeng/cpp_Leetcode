//
//  312.cpp
//  Practice
//
//  Created by Zijian Zeng on 2020/12/14.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        int n = nums.size();
        //vector<vector<int>> c(n, vector<int>(n));
        vector<vector<int>> dp(n, vector<int>(n));
        //cout<<dp<<endl;
        for (int l = 2; l < n; l++){
            for (int left = 0; left < n - l; left++){
                int right = left + l;
                for (int k=left+1; k<right; k++){
                    dp[left][right] = max(dp[left][right], nums[left]*nums[k]*nums[right] + dp[left][k]+dp[k][right]);
                }
            }
        }
        return dp[0][n-1];
    }
};

