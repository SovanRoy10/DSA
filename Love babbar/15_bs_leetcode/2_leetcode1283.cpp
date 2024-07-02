
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

#include<bits/stdc++.h>
using namespace std;
 bool isPossibleMid(vector<int> &nums,int threshold,int mid)
    {
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + ceil(nums[i]/(mid * 1.0));
            if(sum > threshold) return false;
        }
        return true;
    }
        int smallestDivisor(vector<int> &nums, int threshold)
        {
            int start = 1, ans = -1;
            int end = *max_element(nums.begin(), nums.end())+1;

            while (start <= end)
            {
                int mid = start + (end - start) / 2;

                if (isPossibleMid(nums, threshold, mid))
                {
                    ans = mid;
                    end = mid - 1;
                }
                else start = mid + 1;
            }
            return ans;
        }
int main()
{
    
    return 0;
}