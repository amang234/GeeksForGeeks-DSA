//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool is_palindrome(vector<int> arr)
    {
        for(int i = 0; i < arr.size() / 2;i++)
        {
            if(arr[i] == arr[arr.size() - i - 1])
                continue;
            return false;
        }
        return true;
    }

    string pattern(vector<vector<int>> &arr) {
        int n = arr.size();
        for(int i = 0;i < arr.size();i++)
        {
            if(is_palindrome(arr[i]))
                return to_string(i) + " " + "R";
        }
        vector<int> temp(arr.size());
        for(int col = 0; col < arr.size(); col++)
        {
            temp.clear();
            for(int row = 0;row < arr.size();row++)
                temp.push_back(arr[row][col]);
            if(is_palindrome(temp))
                return to_string(col) + " " + "C";
            
        }
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends