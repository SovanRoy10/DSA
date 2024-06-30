#include<iostream>
using namespace std;
int fibonacci_series(int n)
{
    int first=-1,second=1;

    for(int i=0;i<n;i++)
    {
        int sum = first+ second;
        first = second;
        second = sum;
    }

    return second;
}
int main()
{
    int n;
    cin>>n;

    cout<< fibonacci_series(n);
    return 0;
}