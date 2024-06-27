#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};

    int size = sizeof(arr)/sizeof(int);

    int start=0,end =  size -1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++; end--;
    }

    print(arr,size);

    return 0;
}