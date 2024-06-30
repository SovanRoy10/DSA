// search in rotated sorted array
// https://leetcode.com/problems/search-in-rotated-sorted-array/

#include<bits/stdc++.h>
using namespace std;
 int findPivotIndex(vector<int> &arr)
        {
            int start = 0, end = arr.size() - 1;

            while (start < end)
            {
                int mid = start + (end - start) / 2;

                if (arr[mid] > arr[end]) start = mid + 1;
                else
                {
                    end = mid;
                }
            }
            return end;
        }
    int binarySearch(vector<int> arr, int target,int start,int end)
    {
        if(start==end)
        {
            if(arr[start]==target) return start;
            return -1;
        }
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if(arr[mid]==target) return mid;
            else if(arr[mid]> target) end = mid-1;
            else start = mid+1;
        }
        return -1;
    }

    int search(vector<int> &arr, int target)
    {
        int pivotIndex= findPivotIndex(arr);
        
        int result1 = binarySearch(arr,target,pivotIndex,arr.size()-1);
        if(result1 !=-1) return result1; 
        return binarySearch(arr,target,0,pivotIndex);
    }
int main()
{
    
    return 0;
}