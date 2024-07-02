// https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;
bool isPossibleMid(vector<int> &stalls,int k ,int mid)
{
    int cowCount=1,lastPosition=stalls[0];
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastPosition>=mid){
            cowCount++;
            if(cowCount==k) return true;
            lastPosition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int maxi = stalls[0];
    int mini = stalls[0];
    for(int i=0;i<stalls.size();i++)
    {
        maxi = max(maxi,stalls[i]);
        mini = min(mini,stalls[i]);
    }
    int start=0, end = maxi-mini,ans=-1;

    while(start<= end)
    {
        int mid = start + (end-start)/2;

        if(isPossibleMid(stalls,k,mid))
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return ans;
}
int main()
{
    
    return 0;
}