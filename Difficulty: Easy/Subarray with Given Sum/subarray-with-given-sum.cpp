// User function Template for C++
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>& arr, int sum) {
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        int SUM = 0;
        for(int i=0; i<arr.size(); i++) {
            
            SUM += arr[i];
            
            if(mp.find(SUM-sum) != mp.end()) {
                return {mp[SUM-sum]+2,i+1};   
            }
            
            if(mp.find(SUM) == mp.end())
            mp[SUM] = i;
        }
        
        return {};
    }
};