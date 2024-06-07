//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxOccured(int n, int l[], int r[], int maxx) {
        vector<int> arr(maxx + 2, 0);
        for (int i = 0; i < n; i++) {
            arr[l[i]]++;
            if (r[i] + 1 <= maxx) {
                arr[r[i] + 1]--;
            }
        }

        int maxCount = 0, result = 0, currentSum = 0;
        for (int i = 0; i <= maxx; i++) {
            currentSum += arr[i];
            if (currentSum > maxCount) {
                maxCount = currentSum;
                result = i;
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    // taking testcases
    cin >> t;

    while (t--) {
        int n;

        // taking size of array
        cin >> n;
        int l[n];
        int r[n];

        // adding elements to array L
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        int maxx = 0;

        // adding elements to array R
        for (int i = 0; i < n; i++) {

            cin >> r[i];
            if (r[i] > maxx) {
                maxx = r[i];
            }
        }
        Solution ob;

        // calling maxOccured() function
        cout << ob.maxOccured(n, l, r, maxx) << endl;
    }

    return 0;
}
// } Driver Code Ends