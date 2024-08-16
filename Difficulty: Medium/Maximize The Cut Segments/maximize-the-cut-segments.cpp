//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    int dp[10001];
    int solve(int x, int y, int z, int n){
        //base case
        if(n<0){
            return INT_MIN;
        }
        if(n==0){
            return 0;
        }
        
        if(dp[n]!=-1) return dp[n];
        
        int op1 = 1+solve(x,y,z,n-x);
        int op2 = 1+solve(x,y,z,n-y);
        int op3 = 1+solve(x,y,z,n-z);
        
        return dp[n] = max({op1,op2,op3});
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        memset(dp,-1,sizeof(dp));
        int ans = solve(x,y,z,n);
        if(ans<=0) return 0;
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends