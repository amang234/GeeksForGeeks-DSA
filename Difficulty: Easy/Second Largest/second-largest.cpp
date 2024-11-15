//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    
    int getSecondLargest(vector<int> &arr) {
        int first=-1;
        int second=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>second){
                if(arr[i]>first){
                    second=first;
                    first=arr[i];
                }
                
                else if(arr[i]==first){
                    continue;
                }
                
                else {
                    second=arr[i];
                }
            }
        }
        return second;
    }
};

//{ Driver Code Starts.

int main() {
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends