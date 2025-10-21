class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        
        vector<int> res;
        
        while(res.size()<k){
            auto it = pq.top();pq.pop();
            res.push_back(it.second);
        }
        return res;
    }
};
