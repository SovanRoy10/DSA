// https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   for(int i=0;i<arr.size();i++)
   {
       for(int j=i+1;j<arr.size();j++)
       {
           if(arr[i]+arr[j]==s)
           ans.push_back({min(arr[i],arr[j]), max(arr[i],arr[j])});
       }
   }
   sort(ans.begin(),ans.end());
   return ans;
}
int main()
{
    
    return 0;
}