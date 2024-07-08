//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int n=arr.size(),ans=INT_MAX,diff=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            int sum=target-arr[i];
            int j=i+1,k=n-1;
            while(j < k){
                int curr=arr[j]+arr[k];
                if(curr == sum){return target;}
                int curr_diff=abs(sum-curr);
                if(curr_diff < diff){
                    ans=curr+arr[i];
                    diff=curr_diff;
                }
                else if(curr_diff == diff){
                    ans=max(ans,curr+arr[i]);
                }
                if(curr < sum){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends