//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long getCount(int n) {
        vector<vector<int>> neighbors = {
            {0, 8}, {1, 2, 4}, {2, 1, 3, 5}, {3, 2, 6}, {4, 1, 5, 7},
            {5, 2, 4, 6, 8}, {6, 3, 5, 9}, {7, 4, 8}, {8, 0, 5, 7, 9}, {9, 6, 8}
        };       

      vector<vector<long long>> dp(n + 1, vector<long long>(10, 0));
        for (int j = 0; j <= 9; ++j) {
            dp[1][j] = 1;
        }
        for (int i = 2; i <= n; ++i) {
            for (int j = 0; j <= 9; ++j) {
                for (int neighbor : neighbors[j]) {
                    dp[i][j] += dp[i - 1][neighbor];
                }
            }
        }
        long long result = 0;
        for (int j = 0; j <= 9; ++j) {
            result += dp[n][j];
        }
        return result;
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends