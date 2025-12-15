class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {

        int longestSubArray = 0;
        int prefixSum = 0;
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(prefixSum == k) {
                longestSubArray = max(longestSubArray,i + 1);
            }
            
            // Dont use mp[prefixSum-k] as it will initialize it by 0 if dont exists which can cause problems.
            if(mp.find(prefixSum-k) != mp.end()) {
                longestSubArray = max(longestSubArray,i-mp[prefixSum-k]);   
            }
            
            if(mp.find(prefixSum) == mp.end()) {
                mp[prefixSum] = i;
            }
        }
        
        return longestSubArray;
    }
};