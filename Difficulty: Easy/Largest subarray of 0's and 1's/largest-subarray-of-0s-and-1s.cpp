//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        int n = arr.size();
        int ans = 0;
        int sum = 0;
        unordered_map <int, int> mp;
        mp[0] = -1;
        
        for(int i = 0; i < n; i++){
            sum += (arr[i] ? 1:-1);
            
            if(mp.find(sum) != mp.end()) ans = max(ans, i - mp[sum]);
            else mp[sum] = i;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends