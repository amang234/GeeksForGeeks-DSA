class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Find the largest element <= x using upper_bound
        int idx1 = upper_bound(arr.begin(), arr.end(), x-1) - arr.begin() - 1;
        
        // Find the smallest element > x using lower_bound
        int idx2 = lower_bound(arr.begin(), arr.end(), x+1) - arr.begin();
        
        vector<int> ans;
        int n = arr.size();
        
        // Use two pointers to find k closest elements
        while ((idx1 >= 0 || idx2 < n) && k) {
            // Calculate differences (use 1e9 as infinity if out of bounds)
            int diff1 = (idx1 < 0 ? INT_MAX : abs(arr[idx1] - x));
            int diff2 = (idx2 >= n ? INT_MAX : abs(arr[idx2] - x));
            
            if (diff1 < diff2) {
                // Left element is closer
                ans.push_back(arr[idx1]);
                --idx1;
            } else if (diff1 > diff2) {
                // Right element is closer
                ans.push_back(arr[idx2]);
                ++idx2;
            } else {
                // If equal, prefer the right (larger) element
                ans.push_back(arr[idx2]);
                ++idx2;
            }
            --k;
        }
        
        return ans;
    }
};