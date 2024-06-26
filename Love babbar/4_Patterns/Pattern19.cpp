#include<iostream>
using namespace std;
int main()
{
    int n=10;
    for(int i=1;i<=n;i++)
    {
        int num=0;
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>= n+1 -i && j<= n-1+i)
            {
                if(j<=n) num++;
                else --num;
                cout<<num<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}