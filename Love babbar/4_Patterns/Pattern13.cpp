#include<iostream>
using namespace std;
int main()
{
    int n=4;
    char ch ='A'-1;
    for(int i=1;i<=n;i++)
    {
        ch = ch+1;
        char startChar = ch;
        for(int j=1;j<=i;j++)
        {
            cout<<startChar++<<" ";
        }
        cout<<endl;
    }
    return 0;
}