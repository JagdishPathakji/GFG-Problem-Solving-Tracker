class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        
        int prefixSum = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        
        int total = 0;
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(mp.find(prefixSum) != mp.end())
            total += mp[prefixSum];
            
            mp[prefixSum]++;
        }
        
        return total;
    }
};