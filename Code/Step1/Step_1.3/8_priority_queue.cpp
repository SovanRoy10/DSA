#include <bits/stdc++.h>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8,5,2}

    cout << pq.top(); // prints 8

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);     // {5}
    pq1.push(2);     // {5,2}
    pq1.push(8);     // {8,5,2}
    pq1.emplace(10); // {10,8,5,2}

    cout << pq1.top(); // prints 10

    // time complexity of push and pop is log(n)
    // time complexity of top is o(1)

    return 0;
}