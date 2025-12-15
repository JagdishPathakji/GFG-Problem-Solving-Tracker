class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        
        int prefixSum = 0;
        unordered_map<int,bool> mp;
        
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            
            if(prefixSum == 0)
            return true;
            
            if(mp[prefixSum] == true)
            return true;
            
            mp[prefixSum] = true;
        }
        
        return false;
    }
};