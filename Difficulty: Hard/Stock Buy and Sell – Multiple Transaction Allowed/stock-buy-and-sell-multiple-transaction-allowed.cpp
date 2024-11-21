//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int lmin = prices[0];
        int lmax = prices[0];
        int prof = 0;
        
        int i = 0;
        while(i<n-1){
            while(prices[i] >= prices[i+1] && i<n-1){
                i++;
            }
            lmin = prices[i];
            
            while(prices[i] <= prices[i+1] && i<n-1){
                i++;
            }
            lmax = prices[i];
            
            prof += (lmax-lmin);
            i++;
        }
        return prof;
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
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends