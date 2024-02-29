//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	     long long ans = 0;
        
        for(int i = 0; i < 32; i++) {
            long long ones = 0;
            long long zeros = 0;
            
            for(int j = 0; j < n; j++) {
                if(arr[j]&1)
                    ones++;
                else 
                    zeros++;
                    
                arr[j] >>= 1;
            }
            
            ans += 2*(ones*zeros);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends