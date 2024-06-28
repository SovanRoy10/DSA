// https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int xor_sum = 0;
    for(auto elem : arr)
    {
        xor_sum = xor_sum ^ elem;
    }

    for(int i=1;i<arr.size();i++)
    {
        xor_sum = xor_sum ^ i;
    }
	
    return xor_sum;
}
int main()
{
    
    return 0;
}