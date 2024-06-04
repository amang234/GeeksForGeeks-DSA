//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        bool allOne=true;
        for(int i=s.length()-1;i>=0;i--){ //traversing from rightmost
            if(s[i]=='0'){
                allOne=false;
               s[i]='1'; //convert first occuring zero to one and all previous 1 to zero
               break;
            } 
            else s[i]='0';
        }
        if(allOne) s='1'+s;  //all bits are 1
        while(s[0]=='0') s.erase((s.begin()));  // to remove leading zeros
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends