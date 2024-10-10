//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
       unordered_map<int, int> map;
       int ans = 0;
       
       for(int i = 0;i < arr.size();i++){
           if(map.find(arr[i]) != map.end())
               ans = max(ans, i - map[arr[i]]);
           else
               map.insert(make_pair(arr[i], i));
       }
       return ans;
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

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends