//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
       //code here
       vector<int>vv;
        for(int i=0;i<=n;i++)
        {
            if(i==0 || i==1 || i==2)
            {
                vv.push_back(1);
            }
            else
            {
                int sum=(vv[i-2]+vv[i-3])%(1000000007);
                vv.push_back(sum);
            }
        }
        return vv[n];
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
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends