class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        
        unordered_map<int,int> mp;
        int prefixSum = 0;
        int ans = 0;
        
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(prefixSum == k)
            ans = max(ans,i+1);
            else if(mp.find(prefixSum-k) != mp.end())
            ans = max(ans,i-mp[prefixSum-k]);
            
            // to keep the map of most oldest index found.
            if(mp.find(prefixSum) == mp.end())
            mp[prefixSum] = i;
        }
        
        return ans;
    }
};