//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
    const int MOD = 1e9 + 7;
public:
    int ways(int x, int y)
    {
        //code here.
        vector<vector<int>> dp(x+1, vector<int>(y+1, 0));
        
        for(int i = 0; i <= x; i++) {
            for(int j = 0; j <= y; j++) {
                if(i == 0 || j == 0) {
                    dp[i][j] = 1;
                    continue;
                }
                
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
        
        return dp[x][y];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends