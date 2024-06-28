// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;
    vector <int> ans;
    while(i<n && j <m){
        if(arr1[i]==arr2[j])
        {
            ans.emplace_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;    
    }
    if(ans.size()==0)
       ans.emplace_back(-1);
    return ans;
}
int main()
{
    
    return 0;
}