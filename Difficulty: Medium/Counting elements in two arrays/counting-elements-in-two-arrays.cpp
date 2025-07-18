class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        sort(b.begin(), b.end());
        vector<int> ans;
        for (int x : a) {
            int k = upper_bound(b.begin(), b.end(), x) - b.begin();
            ans.push_back(k);
        }
        return ans;
        
    }
};