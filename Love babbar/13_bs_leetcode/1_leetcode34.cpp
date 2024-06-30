// first and last occurence of element in sorted array

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include<bits/stdc++.h>
using namespace std;
 int helper(vector<int> nums, int target, bool isFirstOccurence)
        {
             int start = 0, end = nums.size() - 1;
            int ans = -1;

            while (start <= end)
            {
                int mid = start + (end - start) / 2;

                if (nums[mid] == target)
                {
                    ans = mid;
                    if(isFirstOccurence) end = mid-1;
                    else start = mid+1;
                }
                else if (nums[mid] > target) end = mid - 1;
                else start = mid + 1;
            }
            return ans;
        }
        vector<int> searchRange(vector<int> &nums, int target)
        {
           
            
            int first = helper(nums,target,1);
            int last = helper(nums,target,0);
            return {first,last};
        }
int main()
{
    
    return 0;
}