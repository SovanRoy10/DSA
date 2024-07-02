// https://leetcode.com/problems/split-array-largest-sum/

#include<bits/stdc++.h>
using namespace std;
 bool isPossibleMid(vector<int> &arr, long long mid, int m)
        {
            long long sum = 0, count = 1;
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] > mid) return false;
                if (sum + arr[i] > mid)
                {
                    count++;
                    sum = arr[i];
                    if (count > m) return false;
                }
                else
                {
                    sum = (long long) sum + arr[i];
                }
            }
            return true;
        }
    int splitArray(vector<int> &arr, int m)
    {
        long long sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        long long start = 0, end = sum;
        long long ans = -1;

        while (start <= end)
        {
            long long mid = start + (end - start) / 2;

            if (isPossibleMid(arr, mid, m))
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