//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	     if(s.length()==1)
    {
        return true;
    }
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'a']++;
    }
    int count=0;
    int maxi=0;
    int mini=s.length();
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0 and arr[i]==maxi)
        {
            count++;
        }
    }
    if(maxi==mini)
    {
        return true;
    }
    if(mini!=1)
    {
        if(count>1)
        {
            return false;
        }
    }
    if(maxi-mini==1)
    {
        return true;
    }
    return false;
 
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends