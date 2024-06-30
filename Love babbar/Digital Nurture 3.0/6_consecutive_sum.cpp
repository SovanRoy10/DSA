// sliding window approach

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> consecutiveSum(int n) {
    int start = 1, end = 1, sum = 0;
    vector<vector<int>> ans;

    while (start <= n) { 
        sum = 0;
        end = start;

    
        while (sum < n && end <= n) {
            sum += end;
            end++;
        }

        if (sum == n) {
            vector<int> vec;
            for (int i = start; i < end; ++i) {
                vec.push_back(i);
            }
            ans.push_back(vec);
        }

        start++;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ans = consecutiveSum(n);

    for (const auto& sequence : ans) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
