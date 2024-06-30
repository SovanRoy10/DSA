#include<iostream>
using namespace std;
int nonRepeatedCount(int n)
{
    int arr[10] = {0};
    int m = n,count=0;
    while(m)
    {
        arr[m%10]++;
        m/=10;
    }

    while(n)
    {
        if(arr[n%10]==1) count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n;
    cin>> n;

    cout<< nonRepeatedCount(n);

    return 0;
}