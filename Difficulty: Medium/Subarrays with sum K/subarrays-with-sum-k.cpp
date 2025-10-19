class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        
        int prefixSum = 0;
        int ans = 0;
        unordered_map<int,int> mp;
        
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(prefixSum == k)
            ans += 1;
            
            if(mp.find(prefixSum-k) != mp.end())
            ans += mp[prefixSum-k];
            
            mp[prefixSum]++;
        }
        
        return ans;
    }
};