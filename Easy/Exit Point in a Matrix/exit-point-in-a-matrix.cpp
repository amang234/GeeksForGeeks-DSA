//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        int i = 0 , j = 0;
        bool right = true ;
        bool left = false , up = false , down = false ;
        while(i<n){
            while(j<m){
                if(matrix[i][j] == 1 ) {
                    matrix[i][j] = 0;
                    if(right == true) {
                        i++;
                        right = false ;
                        down = true ;
                        
                        if(i==n) return {i-1,j};
                    }
                    
                    else if ( down == true){
                        j--;
                        down = false;
                        left = true ;
                        
                        if(j<0) return {i,0};
                    }
                    
                    else if ( left == true){
                        i--;
                        left = false;
                        up = true ;
                        
                        if(i<0) return {0,j};
                    }
                    
                    else {
                        up = false;
                        j++;
                        right = true ;
                        
                        if(j == m) return {i,j-1};
                    }
                    
                }
                
                
                else {
                    
                    if(right == true) {
                        j++;
                        
                        if(j == m) return {i,j-1};
                    }
                    
                    else if ( down == true){
                        i++;
                        
                        if(i == n) return {i-1,j};
                    }
                    
                    else if ( left == true){
                        j--;
                        
                        if(j < 0) return {i,0};
                    }
                    
                    else {
                        i--;
                        if(i < 0) return {0,j};
                    }
                    
                }
                
                
            }
        }
        
        return {};
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends