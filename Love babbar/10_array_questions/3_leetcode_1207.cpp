// https://leetcode.com/problems/unique-number-of-occurrences/

#include<bits/stdc++.h>
using namespace std;
 bool uniqueOccurrences(vector<int>& arr) {
        vector<int> vec;
        int count=1;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
                count++;
            else
            {
                vec.push_back(count);
                count=1;
            }
        }
        vec.push_back(count);
        
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i]==vec[i+1]) return false;
        }
        return true;
    }
int main()
{
    
    return 0;
}