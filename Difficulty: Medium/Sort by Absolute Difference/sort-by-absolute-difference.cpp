class Solution {
  public:
    void rearrange(vector<int> &arr, int x) {
        multimap<int,int> mp;
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            mp.insert({abs(arr[i]-x), i});
        }
        for(auto &i : mp){
            v.push_back(arr[i.second]);
        }
        int j=0;
        for(auto &i: v){
            arr[j]=i;
            j++;
        }
    }
};