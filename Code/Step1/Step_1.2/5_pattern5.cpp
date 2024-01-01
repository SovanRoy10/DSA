#include <iostream>
using namespace std;
int main()
{
    /*
    int n = 4;
    int a=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a++<<' ';
        }
        cout << endl;
    }
    */


   //without using extra variable

   
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < i*2; j++)
        {
            cout << j<<' ';
        }
        cout << endl;
    }


    return 0;
}