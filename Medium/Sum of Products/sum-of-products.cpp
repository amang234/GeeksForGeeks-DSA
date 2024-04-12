//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        long sum=0; int k=1;
        for(int i=0; i<32; i++){
            long c=0;        
            for(int j=0; j<n; j++){
                if((arr[j]&1)!=0){
                    c++;
                }
                arr[j]>>=1;
            }
            long num = (c*(c-1))/2; 
            sum+= num*k;    
            k<<=1;
        }
        return sum;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends