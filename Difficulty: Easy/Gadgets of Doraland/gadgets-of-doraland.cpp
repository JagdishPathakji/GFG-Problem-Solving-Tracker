class Solution {
  public:
    vector<int> TopK(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> mp;
        for(int i=0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            pq.push({it->second,it->first});
        }
        
        vector<int> ans;
        while(!pq.empty() && k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};