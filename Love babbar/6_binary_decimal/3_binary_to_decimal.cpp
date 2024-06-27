// binary to decimal conversion

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n =100111000;
    int i=0,ans=0;
    while(n)
    {
        int bit = n % 10;
        if(bit)
            ans = bit * pow(2,i) + ans;
        i++;
        n = n/10;
    }

    cout<< ans;

    return 0;
}