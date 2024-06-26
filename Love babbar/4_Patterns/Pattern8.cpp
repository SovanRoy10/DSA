#include<iostream>
using namespace std;
int main()
{
    
    for(int i=0;i<5;i++)
    {
        char ch = 'A';
        for(int j=1;j<=5;j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}