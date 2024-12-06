//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        int hindex = 0;
        int t = citations.size();
        int arr[t] = {0};
        for(int i=0; i < t; i++){
            if(citations[i] >= t){
                arr[t-1] += 1;
            }
            else if(citations[i] != 0){
                arr[citations[i]-1] += 1;
            }
        }
        int sum = 0;
        for(int i=t-1; i >= 0; i--){
             sum += arr[i];
             arr[i] = sum; 
        }
        for(int i=0; i < t; i++){
            if(arr[i] > i)hindex = i+1;
        }
        
        return hindex;
    }
};

//{ Driver Code Starts.

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.hIndex(arr);

        cout << result << endl;

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends