class Solution {
  public:
    
    bool subArrayExists(vector<int>& arr) {
        
        unordered_map<int,bool> mp;
        int prefixSum = arr[0];
        mp[0] = 1;
        mp[prefixSum] = 1;
        
        if(prefixSum == 0)
        return true;
        
        for(int i=1; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(mp[prefixSum])
            return true;
            
            mp[prefixSum] = true;
        }
        
        return false;
    }
};