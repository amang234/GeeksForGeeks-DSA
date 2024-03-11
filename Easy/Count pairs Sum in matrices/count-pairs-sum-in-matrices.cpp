//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int count = 0;
        int i1 = 0;
        int j1 = n-1;
        int i2 = 0;
        int j2 = n-1;
        
        while(i1<n && j1>=0){
            while(i2<n && j2>=0){
                int sum = mat1[i1][i2]+mat2[j1][j2];
                if(sum==x){
                    count++;
                    i2++;
                    j2--;
                }
                else if(sum<x) i2++;
                else j2--;
            }
            
            if(i2==n) i2 = 0, i1++;
            else if(j2==-1) j2 = n-1, j1--;
        }
        return count;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends