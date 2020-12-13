//
//  303_Range_Sum_Query_Immutable.cpp
//  Practice
//
//  Created by Zijian Zeng on 2020/12/13.
//

#include <vector>
#include <iostream>
using namespace std;

class NumArray {

public:
    vector<int> sum;
    NumArray(vector<int>& nums) {
        long n = nums.size();
        sum.push_back(0);
        
        for (int i = 0; i < n; i++){
            sum.push_back(sum[i] + nums[i]);
            
        }
        cout<<"What does it mean:"<<sum[0]<<endl;
    }
    
    int sumRange(int i, int j) {
        return sum[j+1] - sum[i];
    }
};

