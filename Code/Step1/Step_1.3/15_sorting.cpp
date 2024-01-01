#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // they are same
    if (p1.first > p2.first)
        return true;
    return false;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    sort(a, a + n); // sort in ascending order
    // for vectors :- sort(vec.begin(), vec.end())

    sort(a + 2, a + 4); // only that part will be sorted

    sort(a, a + n, greater<int>()); // sort in descending order

    // important

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it accoring to second element
    //  if second element is same , then sort
    //  it according to first element but in descending

    sort(a, a + n, comp);

    return 0;
}