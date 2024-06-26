#include<iostream>
using namespace std;
int main()
{
    char ch = 'A';
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;
}