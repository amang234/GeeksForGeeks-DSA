//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return 0; // If we are already at the last element
    if (arr[0] == 0) return -1; // Can't move from the first element

    int maxReach = arr[0];  // Farthest point we can reach
    int stepEnd = arr[0];   // The end of the range for the current jump
    int jumps = 1;          // Start with 1 jump since we're moving from the first element

    for (int i = 1; i < n; ++i) {
        // If we've reached the last element
        if (i == n - 1) return jumps;

        // Update the farthest point we can reach
        maxReach = max(maxReach, i + arr[i]);

        // If we reached the end of the current jump range
        if (i == stepEnd) {
            jumps++;             // We need to make another jump
            stepEnd = maxReach;  // Set the next jump's range end

            // If the next jump's range is beyond the last element
            if (stepEnd >= n - 1) return jumps;
        }
        
        // If we can't move further
        if (i >= maxReach) return -1;
    }

    return -1; 
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends