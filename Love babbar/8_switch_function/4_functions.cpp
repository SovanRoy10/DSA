//power , odd and even

#include<iostream>
using namespace std;
int power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans *=a;
    }
    return ans;
}
bool isEven(int a)
{
    return !(a%2);
}
int main()
{
    // pow(a,b)
    cout<<power(5,4)<<endl;

    cout<<isEven(1001)<<endl;

   
    return 0;
}