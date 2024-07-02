// https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1

#include<iostream>
using namespace std;
bool isPossibleMid(int arr[],long long mid,int m,int n)
  {
    long long sum=0,count=1;
    for(int i=0;i<n;i++)
    {
        if (arr[i] > mid) return false; 
        if(sum+arr[i]> mid)
        {
            count++; 
            sum=arr[i];
            if (count > m) return false;
        }
        else
        {
            sum =(long long) sum +arr[i];
        }
    }
    return true;
  }
    long long minTime(int arr[], int n, int m)
    {
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        long long start = 0, end = sum;
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