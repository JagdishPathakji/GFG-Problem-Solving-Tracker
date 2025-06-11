class Solution {
  public:
  
    void find(string &s, vector<string> &ans, int index) {
        
        if(index >= s.size()) {
            ans.push_back(s);
            return;
        }
        
        vector<bool> used(26,0);
        for(int i=index; i<s.size(); i++) {
            if(!used[s[i]-'A']) {
                used[s[i]-'A'] = 1;
                swap(s[i],s[index]);
                find(s,ans,index+1);
                swap(s[i],s[index]);
            }
        }
    }
  
    vector<string> findPermutation(string &s) {
        
        vector<string> ans;
        int index = 0;
        
        find(s,ans,index);
        
        return ans;
    }
};
