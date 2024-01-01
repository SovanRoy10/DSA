#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n * 2; j++)
        {
            if (j <= n + 1 - i || j >= n + i)
            {
                if (j <= n)
                    cout << a++ << ' ';
                else
                    cout << --a << ' ';
            }
            else
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}