class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        
        int prefixSum = 0;
        unordered_map<int,int> mp;
        
        int total = 0;
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(mp[prefixSum] >= 1) {
                total += mp[prefixSum];
            }
            
            if(prefixSum == 0)
            total++;
            
            mp[prefixSum]++;
        }
        
        return total;
    }
};