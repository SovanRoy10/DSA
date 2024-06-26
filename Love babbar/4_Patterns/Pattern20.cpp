#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        int num=0;
        for(int j=1;j<=2*n;j++)
        {
            if(j<= n+1 -i || j>= n+i)
            {
                if(j<=n+1-i) num++;
                else if(j>n+i) --num;
                cout<<num<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}