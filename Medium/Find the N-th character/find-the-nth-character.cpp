//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        r--; 
        string a = "01";
        string b="10"; 
        while(r--){
            string p="";
            string q = "";
            for(int i = 0; i<a.size(); i++){
                if(a[i]=='0')p += "01";
                else p += "10";
                
                if(b[i]=='0')q += "01";
                else q += "10";
            }
            a= p;
            b=q; 
        }
        string ans ="";
        for(auto it:s){
            if(it=='0')ans += a;
            else ans += b;
            if(ans.size()>n)return ans[n];
        }
        return ans[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends