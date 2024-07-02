// https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

#include<bits/stdc++.h>
using namespace std;
bool isPossibleMid(int arr[],int mid,int m,int n)
  {
    int sum=0,count=1;
    for(int i=0;i<n;i++)
    {
        if (arr[i] > mid) return false; // If a single book has more pages than mid, it's not possible
        if(sum+arr[i]> mid)
        {
            count++; 
            sum=arr[i];
            if (count > m) return false;
        }
        else
        {
            sum+=arr[i];
        }
    }
    return true;
  }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if (m > n) return -1; // If there are more students than books, it's not possible to allocate

        int sum = accumulate(arr, arr + n, 0);
        int start = 0, end = sum;
        long long ans = -1;
        
        while(start<= end)
        {
            long long mid = start + (end- start)/2;
            
            if(isPossibleMid(arr,mid,m,n))
            {
                ans = mid;
                end = mid-1;
            }
            else start = mid+1;
        }
        return ans;
    }
int main()
{
    
    return 0;
}