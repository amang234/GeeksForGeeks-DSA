//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

void rotate(vector<vector<int> >& mat) {
    int n =mat.size();
    // Your code goes here
    // this will help to swap the lower part with uper part 
    for(int i =0;i<n;i++){
        for(int j =0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    
    // this will help in to reverse each row 
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n);
        for (int i = 0; i < n; i++) {
            matrix[i].resize(n);
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends