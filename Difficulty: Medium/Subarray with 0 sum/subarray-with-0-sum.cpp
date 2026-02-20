class Solution {
  public:
    
    
    bool subArrayExists(vector<int>& arr) {
        
        int prefixSum = 0;
        unordered_map<int,bool> mp;
        mp[0] = true;
        
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(mp.find(prefixSum) != mp.end())
            return true;
            
            mp[prefixSum] = true;
        }
        
        return false;
    }
};