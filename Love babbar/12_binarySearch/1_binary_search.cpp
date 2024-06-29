#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int n)
{
    int start=0,end=n-1;

    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end = mid-1;
        else start=mid+1;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<binarySearch(arr,7,n);

    
    return 0;
}