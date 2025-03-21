//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends

class Solution {
  public:
    int solve(int idx, vector<int> &arr, int n, vector<int> &dp){
        // Base case: if index goes out of bounds, return 0
        if(idx >= n){
            return 0;
        }
        
        // If already computed, return stored result
        if(dp[idx] != -1){
            return dp[idx];
        }
        
        // Option 1: Take current element and skip next
        int take = arr[idx] + solve(idx+2, arr, n, dp);
        
        // Option 2: Skip current element
        int skip = solve(idx+1, arr, n, dp);
        
        // Store and return max of both
        return dp[idx] = max(take, skip);
    }

    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n+1, -1);  // dp[i] stores max sum from index i
        return solve(0, arr, n, dp);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends