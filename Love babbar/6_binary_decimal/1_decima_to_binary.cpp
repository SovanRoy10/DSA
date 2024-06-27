// decimal to binary conversion

#include<iostream>
using namespace std;
int main()
{
    int n =6;
    int ans=0,power=1;
    while(n)
    {
        int bit = n & 1;
        ans = bit * power + ans;
        power*=10;
        n = n>> 1;
    }

    cout<< ans;

    return 0;
}