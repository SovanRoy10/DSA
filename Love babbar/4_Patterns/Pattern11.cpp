#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char ch = 'A'-1+i;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}