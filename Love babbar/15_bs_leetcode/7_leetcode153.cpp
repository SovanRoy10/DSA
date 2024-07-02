//  https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include<bits/stdc++.h>
using namespace std;
 int findMin(vector<int>& arr) {
        int start =0, end = arr.size()-1;
        int ans =arr[0];
        
        while(start <= end)
        {
            int mid = start + (end- start)/2;
            
            if(arr[mid]>=arr[0])
            {
                start = mid+1;
            }
            else
            {
                ans = arr[mid];
                end = mid-1;
            }
        }
        return ans;
    }
int main()
{
    
    return 0;
}