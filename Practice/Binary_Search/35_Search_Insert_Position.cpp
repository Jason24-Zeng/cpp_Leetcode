//
//  35_Search_Insert_Position.cpp
//  Practice
//
//  Created by Zijian Zeng on 2020/12/12.
//

#include <iostream>
#include <vector>
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int pivot, left = 0;
        int right =  int(nums.size() - 1);
        while(left <= right){
            pivot = left + (right - left)/2;
            if (nums[pivot] == target) return pivot;
            if (target > nums[pivot]) left = pivot + 1;
            else right = pivot - 1;
        }
        return left;
    }
};
