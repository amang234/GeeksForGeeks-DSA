class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            arr.push_back(arr[i]);
        }
        
        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty() && arr[i%n] >= st.top())
            {
                st.pop();
            }
            
            if(i<n)
            {
                if(!st.empty())
                {
                    ans.push_back(st.top());
                }
                else
                {
                    ans.push_back(-1);
                }
            }
            
            st.push(arr[i%n]);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};