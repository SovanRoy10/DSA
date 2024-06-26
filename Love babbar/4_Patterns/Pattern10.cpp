#include<iostream>
using namespace std;
int main()
{
    char startChar = 'A'-1;
    for(int i=0;i<3;i++)
    {
         startChar = ++startChar;
         char ch = startChar;
        for(int j=1;j<=3;j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}