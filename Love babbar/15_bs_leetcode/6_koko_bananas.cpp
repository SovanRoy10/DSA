// https://leetcode.com/problems/koko-eating-bananas/

#include<bits/stdc++.h>
using namespace std;
bool isPossibleMid(vector<int> &piles,int h,int mid)
    {
        double sum = 0;
        for(int i=0;i<piles.size();i++)
        {
           sum+= ceil(piles[i]/(mid* 1.0)) ;
            if(sum > h) return false;
        }
        return true;
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 0;
        int end = *max_element(piles.begin(),piles.end());
        int ans =-1;
        
        while(start<=end)
        {
            int mid = start + (end- start)/2;
            
            if(isPossibleMid(piles,h,mid))
            {
                ans = mid;
                end = mid-1;
            }
            else
                start = mid+1;
        }
        return ans;
    }
int main()
{
    
    return 0;
}