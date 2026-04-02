// User function Template for C++
class Solution {
  public:
    
    bool check(unordered_map<char,int> &mp, unordered_map<char,int> &forpat) {
        
        for(auto it:mp) {
            if(it.second != forpat[it.first])
            return false;
        }
        
        return true;
    }
  
    bool search(string& txt, string& pat) {
        
        unordered_map<char,int> forpat;
        unordered_map<char,int> mp;
        
        for(int i=0; i<pat.size(); i++) {
            mp[txt[i]]++;   
            forpat[pat[i]]++;
        }
        
        int idx = 0;
        for(int i=pat.size(); i<txt.size(); i++) {
            if(check(mp,forpat))
            return true;
            
            mp[txt[i]]++;
            mp[txt[idx++]]--;
        }
        
        return false;
    }
};