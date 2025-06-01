class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        
        int windowlength = 0;
        int n = s.size();
        
        int i = 0;
        int j = 0;
        
        unordered_map<char,int> mp;
        
        while(j < n) {
            
            mp[s[j]]++;
            
            if(mp[s[j]] > 1) {
                while(mp[s[j]] != 1) {
                    mp[s[i]]--;
                    i++;
                } 
            }
            else {
                windowlength = max(windowlength,j-i+1);
            }
            
            j++;
        }
        
        
        return windowlength;
    }
};