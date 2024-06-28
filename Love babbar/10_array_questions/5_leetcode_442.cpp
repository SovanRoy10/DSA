// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include<bits/stdc++.h>
using namespace std;
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        int arr[nums.size()+1];
        
         for(int i=0;i<nums.size()+1;i++)
            arr[i]=0;
            
        for(int i=0;i<nums.size();i++)
        {
           arr[nums[i]]++; 
        }
        
        
        for(int i=0;i<=nums.size();i++)
        {
            if(arr[i]>1)
                ans.push_back(i);
        }
        
        return ans;
    }
int main()
{
    
    return 0;
}