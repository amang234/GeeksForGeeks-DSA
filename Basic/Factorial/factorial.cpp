//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int aman(int n) {
        // base condition
        if(n == 1 || n == 0) {
            return 1;
        }
        // Recursive call
        return n*aman(n-1);
        
    }
    long long int factorial(int N){
        return aman(N);
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends