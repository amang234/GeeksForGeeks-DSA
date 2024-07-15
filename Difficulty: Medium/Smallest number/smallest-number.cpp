//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool add(int s, int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
    return sum==s;
    }
  
    string smallestNumber(int s, int d) {
        string ans="";
        for(int i=pow(10, d-1); i<=pow(10, d)-1; i++){
            if(add(s, i))
                return to_string(i);
        }
    return "-1";
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends