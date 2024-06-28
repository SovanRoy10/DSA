// https://leetcode.com/problems/4sum/

#include<bits/stdc++.h>
using namespace std;
 vector<vector < int>> fourSum(vector<int> &arr, int target)
        {
            vector<vector < int>> ans;

            sort(arr.begin(), arr.end());

            for (int i = 0; i < arr.size() - 1; i++)
            {
                if (i > 0 && arr[i] == arr[i - 1]) continue;	// avoid duplicate for 1st element
                for (int j = i + 1; j < arr.size() - 1; j++)
                {
                    if (j > i + 1 && arr[j] == arr[j - 1]) continue;	// avoid duplicate for 2nd element
                    int left = j + 1, right = arr.size() - 1;

                    while (left < right)
                    {
                        long long sum = (long long) arr[i] + arr[j] + arr[left] + arr[right];

                        if (sum < target) left++;
                        else if (sum > target) right--;
                        else
                        {
                            ans.push_back({ arr[i],
                                arr[j],
                                arr[left],
                                arr[right] });

                           	// avoid duplicates for 3rd element
                            while (left < right && arr[left] == arr[left + 1]) left++;
                           	//avoid duplicates for 4th element
                            while (left < right && arr[right] == arr[right - 1]) right--;

                            left++;
                            right--;
                        }
                    }
                }
            }

            return ans;
        }
int main()
{
    
    return 0;
}