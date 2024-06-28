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
    int n = sizeof(arr)/sizeof(int);

    for(int i=0;i<n-1;i+=2)
    {
       swap(arr[i],arr[i+1]); 
    }

    print(arr,n);
    return 0;
}   