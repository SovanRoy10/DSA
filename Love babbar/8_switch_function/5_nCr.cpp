#include<iostream>
using namespace std;
int factorial(int a)
{
    int fact=1;
    for(int i=a;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r)
{
    return factorial(n)/(factorial(r)* factorial(n-r));
}
int main()
{
    int n=5,r=1;

    cout<< nCr(n,r);
    return 0;
}