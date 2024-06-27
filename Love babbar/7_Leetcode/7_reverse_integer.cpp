// https://leetcode.com/problems/reverse-integer/

#include<iostream>
using namespace std;
int reverse(int x)
{
    int ans = 0, i = 0;
    while (x)
    {
        int rem = x % 10;
        if (ans < INT_MIN / 10 || ans > INT_MAX / 10) return 0;
        ans = ans *10 + rem;
        x /= 10;
    }
    return ans;
}
int main()
{
    
    return 0;
}