//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    set<char>mpp;
	       
	   string s = "";
	    for(auto it: str){
	        if(mpp.find(it) == mpp.end()){
	            mpp.insert(it);
	            s+=it;
	        }
	    }
	    
	    return s;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends