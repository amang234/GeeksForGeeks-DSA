//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        int len=log2(x)+1; 
        long long res=0;
        for(int i=0;i<len;i++){
            long long y=x&1;
            res=(res+y)<<1;
            x>>=1;
        }
        return (res<<(32-len-1));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends