#include<bits/stdc++.h>
using namespace std;
void sort01(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]==0)i++;
        else if(arr[j]==1) j--;
        else if(arr[i]==1 && arr[j]==0)
         {
            swap(arr[i],arr[j]);
         i++;
         j--;
         }
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {0,1,0,1,1,0,1,1,1,1,0,0,0,1,0};
    sort01(arr,sizeof(arr)/sizeof(int));
    print(arr,sizeof(arr)/sizeof(int));


    return 0;
}