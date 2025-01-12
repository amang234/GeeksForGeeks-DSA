//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        vector<int> left(n);
        vector<int> right(n);
        
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        
        for(int i=1; i<n; i++){
            left[i] = max(left[i-1],arr[i]);
        }
        for(int i=n-2; i>=0; i--){
            right[i] = max(right[i+1],arr[i]);
        }
        int ans = 0;
        
        for(int i=0; i<n-1; i++){
            ans += min(left[i],right[i]) - arr[i];
        }

        return ans;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends