//
//  198_House_Robber.cpp
//  Practice
//
//  Created by Zijian Zeng on 2020/12/13.
//

# include <vector>
using namespace std;
class solution{
public:
    int HouseRober(vector<int>& nums){
        long n = nums.size();
        int dp1[n], dp2[n];
        dp1[0] = 0;
        dp2[0] = nums[0];
        for(int i = 1; i<n; i++){
            dp1[i] = max(dp1[i-1], dp2[i-1]);
            dp2[i] = dp1[i-1] + nums[i];
        }
        return dp1[-1]>dp2[-1] ? dp1[-1]: dp2[-1];
    }
};
