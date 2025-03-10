//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int cnt=1;
        
        for(int i=0; i<n; i++){
            if(arr[i]<=0) continue;
            else if(arr[i]==cnt){
                cnt++;
            }else if(arr[i]<cnt){
                continue;
            }else{
                return cnt;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends