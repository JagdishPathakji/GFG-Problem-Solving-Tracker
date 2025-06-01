class Solution {
  public:
    string smallestWindow(string &s1, string &s2) {
        
        int n = s1.size();
        int m = s2.size();
        
        if(m > n) return "";
        
        unordered_map<char,int> mp;
        for(int i=0;  i<s2.size(); i++) {
            mp[s2[i]]++;
        }
        
        int requiredcount = s2.size();
        int i = 0;
        int j = 0;
        int start_i = 0;
        int minwindowsize = INT_MAX;
        
        while(j < n) {
            
            if(mp[s1[j]] > 0)
            requiredcount--;
            
            mp[s1[j]]--;
            
            while(requiredcount == 0) {
                
                // start shrinking the window
                int currwindow = j-i+1;
                if(minwindowsize > currwindow) {
                    minwindowsize = currwindow;
                    start_i = i;
                }
                
                mp[s1[i]]++;
                
                if(mp[s1[i]] > 0)
                requiredcount++;
                
                i++;
            }
            
            j++;
        }
        
        if(minwindowsize == INT_MAX) return "";
        return s1.substr(start_i,minwindowsize);
    }
};