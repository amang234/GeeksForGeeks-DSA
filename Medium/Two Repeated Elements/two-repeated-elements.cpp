//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    vector<int> twoRepeated (int arr[], int n) {
 
        int x = -1,y = -1;
        for(int i = 0;i<n+2;i++){
            if(arr[abs(arr[i])-1]<0)
                if(x==-1) x= abs(arr[i]);
                else y = abs(arr[i]);
            else arr[abs(arr[i])-1] = - arr[abs(arr[i])-1];
        }
        return {x,y};
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends