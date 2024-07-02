// same as aggresive cows

// https://leetcode.com/problems/magnetic-force-between-two-balls/

#include<bits/stdc++.h>
using namespace std;
        bool isPossibleMid(vector<int> &position, int m, int mid)
        {
            int lastPosition = position[0], count = 1;
            for (int i = 0; i < position.size(); i++)
            {
                if (position[i] - lastPosition >= mid)
                {
                    count++;
                    if (count == m) return true;
                    lastPosition = position[i];
                }
            }
            return false;
        }
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int ans = -1;

        int start = 0, end = position.back() - position[0];
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (isPossibleMid(position, m, mid))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
int main()
{
    
    return 0;
}