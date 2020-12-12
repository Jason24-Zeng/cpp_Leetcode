//
//  276_Paint_Fence.cpp
//  Practice
//
//  Created by Zijian Zeng on 2020/12/12.
//

class Solution {
public:
    int numWays(int n, int k) {
        if(n==0) return 0;
        if(n==1) return k;
        if(n==2) return k*k;
        int start = 3;
        int prepre = k;
        int pre = k*k;
        int temp;
        while(start<=n){
            temp = (prepre + pre) * (k - 1);
            prepre = pre;
            pre = temp;
            start ++;
        }
        return pre;
    }
};
