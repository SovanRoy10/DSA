// https://leetcode.com/problems/power-of-two/

#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) 
{
    int count=0;
    while(n>0)
        {
            int bit = n & 1;
            n = n>> 1;
            if(bit==1) count++;
            
        }
        return count==1;
    }
int main()
{
    
    return 0;
}