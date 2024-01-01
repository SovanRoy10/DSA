#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    char a = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a << ' ';
        }
        cout << endl;
        a++;
    }

    return 0;
}