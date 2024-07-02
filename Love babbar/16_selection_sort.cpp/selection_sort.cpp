#include<bits/stdc++.h>
using namespace std;
int minElemPosition(vector<int> arr,int posi)
{
    int mini = posi;
    for(int i=posi;i<arr.size();i++)
    {
        if(arr[i]<arr[mini]) mini = i;
    }
    return mini;
}
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++)
    {
        int miniElemPosi = minElemPosition(arr,i);
        swap(arr[i],arr[miniElemPosi]);
    }
}
int main()
{
    
    return 0;
}