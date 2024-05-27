//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    unordered_map<int,int>m1;
    int recur(int n,vector<int>&a){
        for(int i=n-1;i>=0;i--){
            int c1=0;
            int c2=0;
            if(m1.find(a[i]-1)!=m1.end()){
                c1=m1[a[i]-1];
            }
            if(m1.find(a[i]+1)!=m1.end()){
                c2=m1[a[i]+1];
            }
            c1=max(c1,c2)+1;
            if(m1.find(a[i])==m1.end()){
                m1[a[i]]=c1;
            }
            else{
                m1[a[i]]=max(m1[a[i]],c1);
            }
        }
        int max1=INT_MIN;
        for(auto x:m1){
            max1=max(max1,x.second);
        }
        return max1;
    }
    int longestSubseq(int n, vector<int> &a) {
        return recur(n,a);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends