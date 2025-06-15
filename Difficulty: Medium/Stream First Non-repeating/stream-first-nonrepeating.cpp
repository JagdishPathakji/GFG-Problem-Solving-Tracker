class Solution {
  public:
    string FirstNonRepeating(string &s) {
        
        string ans = "";
        int i = 0;
        int j = 0;
        
        queue<char> q;
        unordered_map<char,int>  mp;
    
        while(i < s.size()) {
            
            mp[s[i]]++;
            q.push(s[i]);
            
            while(mp[q.front()] > 1 and !q.empty())
            q.pop();
                                        
            if(q.empty()) {
                ans += '#';
            }
            else {
                ans += q.front();
            }
                                
            i++;
        }
        
        return ans;
    }
};