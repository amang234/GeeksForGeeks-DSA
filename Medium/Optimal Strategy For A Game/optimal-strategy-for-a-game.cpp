//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long maximumAmount(int n, int arr[]){
        // Your code here
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++)
        {
            dp[i][i]=arr[i];
        }
         for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            long long first = arr[i] + min((i + 2 <= j) ? dp[i + 2][j] : 0, (i + 1 <= j - 1) ? dp[i + 1][j - 1] : 0);
            long long second = arr[j] + min((i + 1 <= j - 1) ? dp[i + 1][j - 1] : 0, (i <= j - 2) ? dp[i][j - 2] : 0);
            dp[i][j] = max(first, second);
        }
    }

    return dp[0][n - 1];
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends