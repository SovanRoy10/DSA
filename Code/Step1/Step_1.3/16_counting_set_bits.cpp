#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 7; // 111 : binary
    int count = __builtin_popcount(num); // gives us the set bits
    cout << count<<endl;


    //if the number is long long then the function will be __bulitin_popcountll(n)
    long long n = 16578578687;
    cout<< __builtin_popcountll(n)<<endl;
    return 0;
}