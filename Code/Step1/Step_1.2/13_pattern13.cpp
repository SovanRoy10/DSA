#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    char a = 'A';

    for (int i = 1; i <= n; i++)
    {
        char b= a;
        for (int j = 1; j <= i; j++)
        {
            cout << b++ << ' ';
        }
        cout << endl;
        a++;
    }

    return 0;
}