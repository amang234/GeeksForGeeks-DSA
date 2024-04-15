//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        // Your code goes here;
        vector<int> counts(n,0);
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            int l=0;
            int r=n-1;
            int ans=-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(b[mid]<=a[i])
                {
                    ans=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;
            }
            if(ans!=-1)
            {
                counts[i]=ans+1;
            }
        }
        
        vector<int> ans(q,0);
        for(int i=0;i<q;i++)
        {
            ans[i]=counts[query[i]];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> a, b, ans;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }
        int q;
        cin >> q;
        vector<int> query;
        for (int i = 0; i < q; i++) {
            cin >> input;
            query.push_back(input);
        }
        Solution obj;
        ans = obj.countElements(a, b, n, query, q);
        for (int i = 0; i < q; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
// } Driver Code Ends