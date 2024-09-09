//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int ones = 0, zeros = 0, twos = 0;
        int i = 0;
        for(auto it: arr){
            if(it==0){
                zeros++;
            }
            else if(it == 1){
                ones++;
            }
            else{
                twos++;
            }
            arr[i] = 2;
            i++;
        }
        i = 0;
        while(zeros--){
            arr[i] = 0;
            i++;
        }
        while(ones--){
            arr[i] = 1;
            i++;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends