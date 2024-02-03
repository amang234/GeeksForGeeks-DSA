//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        int solve(int ind,vector<int>&a,int k,vector<int>&dp){
        if(ind ==  a.size())return 0 ;
        int n = a.size();
        int len = 0;
        int maxi = INT_MIN;
        int max_ans = INT_MIN;
        if(dp[ind] != -1)
            return dp[ind];
        for(int j = ind;j< min(ind+k,n);j++){
            len++;
            maxi=max(maxi,a[j]);
            int sum = len * maxi + solve(j+1,a,k,dp);
            max_ans = max(max_ans,sum);
        }
        return dp[ind] = max_ans;
    }
    int solve(int n, int k, vector<int>& arr){
        vector<int>dp(n,-1);
        return solve(0,arr,k,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends