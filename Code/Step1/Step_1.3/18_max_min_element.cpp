#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int maxi = *max_element(a, a + 5);
    cout << "The max element is " << maxi << endl;

    int min = *min_element(a, a + 5);
    cout << "The min element is " << min << endl;

    return 0;
}