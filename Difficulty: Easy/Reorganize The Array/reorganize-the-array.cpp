//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> rearrange(vector<int>& arr) {
        // Loop through the array
        for (int i = 0; i < arr.size(); i++) {
            // Continue swapping until the current element is in the right place or it is -1
            while (arr[i] != i && arr[i] != -1) {
                swap(arr[i], arr[arr[i]]);
            }
        }
        //returning the modified array
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution solution;
        vector<int> ans = solution.rearrange(arr);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends