class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        
        int prefixSum = 0;
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        int maxLen = 0;
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(mp.find(prefixSum-k) != mp.end()) 
            maxLen = max(maxLen,i-mp[prefixSum-k]);
            
            if(mp.find(prefixSum) == mp.end())
            mp[prefixSum] = i;
        }
        
        return maxLen;
    }
};