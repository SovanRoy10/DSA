#include<iostream>
using namespace std;
int sumOfUniqueDigits(int n)
{
    int arr[10] = {0};
    int m = n,sum=0;
    while(m)
    {
        arr[m%10]++;
        m/=10;
    }

    while(n)
    {
        if(arr[n%10]==1) sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>> n;

    cout<< sumOfUniqueDigits(n);

    return 0;
}