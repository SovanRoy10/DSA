// https://leetcode.com/problems/3sum/

#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n - 2; i++) {
        // Avoid duplicates for the first element
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        
        int left = i + 1, right = n - 1;
        
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == K) {
                ans.push_back({arr[i], arr[left], arr[right]});
                
                // Avoid duplicates for the second element
                while (left < right && arr[left] == arr[left + 1]) left++;
                // Avoid duplicates for the third element
                while (left < right && arr[right] == arr[right - 1]) right--;
                
                left++;
                right--;
            } else if (sum < K) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    return ans;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N;
        vector<int> ARR(N);
        
        for (int i = 0; i < N; i++) {
            cin >> ARR[i];
        }
        
        cin >> K;
        
        vector<vector<int>> result = findTriplets(ARR, N, K);
        
        if (result.empty()) {
            cout << "-1" << endl;
        } else {
            for (auto &triplet : result) {
                cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
            }
        }
    }
    
    return 0;
}


