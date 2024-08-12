//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size() ;
        int l = 0 , r = n ; 
        int ans = -1 ;
        while(l <= r){
            int mid = (l + r) / 2 ;
            int s1 = arr1[mid - 1] , e1 = arr1[mid] ;
            int mid2 = n - mid ;
            int s2 = arr2[mid2 - 1] , e2 = arr2[mid2] ;
            if(s1 <= e2 && s2 <= e1){
                return max(s1 , s2) + min(e1 , e2) ;
            }
            if(s1 > e2) r = mid - 1 ;
            if(s2 > e1) l = mid + 1 ;
        }
        return 0 ;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends