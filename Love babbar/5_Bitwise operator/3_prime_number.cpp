#include<iostream>
using namespace std;
int main()
{
    // find prime or not
    int n=2;
    int count=0;

    for(int i=2;i<=n-1;i++)
    {
        if(n % i==0) count++;
    }
    
    if(count || n==1)
        cout<<"This number is not prime";
    else 
        cout<<"This number is prime";


    // operator precedence
    cout<<endl<< (2*3/4 +5)<<endl; // 6
    return 0;
}