// https://leetcode.com/problems/find-pivot-index/

#include<bits/stdc++.h>
using namespace std;
 int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int leftSum =0 ;
        
        for(int i=0;i<nums.size();i++)
        {
            if (i>0) leftSum +=nums[i-1];
            if(leftSum == sum-leftSum-nums[i])
                return i;
        }
        return -1;
    }
int main()
{
    
    return 0;
}