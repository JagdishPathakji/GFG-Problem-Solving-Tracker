class Solution {
  public:
    int longestUniqueSubstr(string &s) {
    
        unordered_map<char,int> mp;
        int maxWindowLen = 0;
        
        
        int i = 0;
        int j = 0;
        
        while(j < s.size()) {
            
            mp[s[j]]++;
            
            while(mp[s[j]] != 1) {
                mp[s[i]]--;
                i++;
            }
            
            maxWindowLen = max(maxWindowLen,j-i+1);    
            j++;
        }
        
        
        return maxWindowLen;
    }
};
