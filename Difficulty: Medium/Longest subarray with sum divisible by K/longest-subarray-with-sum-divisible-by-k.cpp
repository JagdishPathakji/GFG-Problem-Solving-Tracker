// User function template for C++
class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        long long int sum = 0;
        int len = 0;
        
            
        for(int i=0; i<arr.size(); i++) {
            
            sum += arr[i];
            
            int rem = sum % k;
            if(rem < 0) rem += k;
            
            if(mp.find(rem) != mp.end()) {
                len = max(len,i-mp[rem]);   
            }
            
            if(mp.find(rem) == mp.end()) {
                mp[rem] = i;   
            }
        }
        
        return len;
    }
};