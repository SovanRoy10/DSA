// negative number decimal to binary conversion

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =-10000;
    n = ~n +1 ;
    string ans="";
    while(n)
    {
        string bit = to_string( n & 1);
        ans = ans.insert(0,bit);
        n = n>> 1;
    }

    cout<<"-"<< ans;

    return 0;
}