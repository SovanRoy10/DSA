// https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr, int target)
        {
            unordered_map<int, int> mp;
            for (int i = 0; i < arr.size(); i++)
            {
                if (mp.find(target - arr[i]) != mp.end())
                {
                    return {i,mp[target - arr[i]]};
                }
                mp[arr[i]] = i;
            }
            return { -1,-1 };
        }
int main()
{
    
    return 0;
}