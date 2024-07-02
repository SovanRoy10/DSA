#include<bits/stdc++.h>
using namespace std;
int create_pin(int a,int b,int c)
{
    int maxi =INT_MIN,mini,sum=0,i=0;
    while(a && b&& c)
    {
        maxi = max(max(a%10,b%10),max(maxi,c%10));
        mini = min(min(a%10,b%10),c%10);
        sum = mini * pow(10,i) + sum;

        a/=10;
        b/=10;
        c/=10;

        i++;

    }
    sum = maxi * pow(10,i) + sum;
    return sum;
}
int main()
{
    int a,b,c;
    cin>> a >> b >> c;

    cout<< create_pin(a,b,c)<<endl;
    return 0;
}