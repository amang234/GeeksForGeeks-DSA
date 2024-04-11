//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string decimalToBinary(int n)
    {
        string s = bitset<64> (n).to_string();
        const auto loc1 = s.find('1');
        
        if(loc1 != string::npos)
            return s.substr(loc1);
        
        return "0";
    }
    int grayToBinary(int n)
    {
        if(n==0)
            return 0;
        string str = decimalToBinary(n);
        int i = 1;
        while(str[i]!='\0'){
            if((str[i-1] == '1' && str[i] == '0')||(str[i-1] == '0' && str[i] == '1')){
                str[i] = '1';
            }
            else
                str[i] = '0';
            i++;
        }
        
        string num = str;
        int dec_value = 0;
        int base = 1;
     
        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == '1')
                dec_value += base;
            base = base * 2;
        }
     
        return dec_value;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends