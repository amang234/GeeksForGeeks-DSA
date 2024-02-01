//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        unordered_set<char> alphabetSet;
        
        for (char i = 'a'; i <= 'z'; i++) {
            alphabetSet.insert(i);
        }

        for (int i = 0; i < s.length(); i++) {
            char c = tolower(s[i]); // Convert to lowercase for case-insensitivity
            if (isalpha(c)) { // Check if it is an alphabet character
                alphabetSet.erase(c);
            }
            
            if (alphabetSet.empty()) {
                return true;
            }
        }
        return false;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends