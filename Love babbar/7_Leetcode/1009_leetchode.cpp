// complement of base 10 integer
// https://leetcode.com/problems/complement-of-base-10-integer/

#include<iostream>
using namespace std;
 int bitwiseComplement(int n)
{
    int count = 0, mask = 0;
    int copy = n;

    if (n == 0) return 1;

    while (copy)
    {
        copy = copy >> 1;
        mask = mask | 1;
        mask = mask << 1;
    }

    mask = mask >> 1;
    return mask &(~n);
}
int main()
{
    
    return 0;
}