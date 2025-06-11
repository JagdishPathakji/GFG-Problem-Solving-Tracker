class Solution {
  public:
    
    void find(string &s, set<string> &ans, int index) {
        
        if(index == s.size()) {
            ans.insert(s);
            return;
        }
        
        for(int i=index; i<s.size(); i++) {
            swap(s[index],s[i]);
            find(s,ans,index+1);
            swap(s[index],s[i]);
        }
    }
  
    vector<string> findPermutation(string &s) {

        set<string> ans;
        int index = 0;
        
        find(s,ans,index);
        
        vector<string> realans(ans.begin(),ans.end());
        return realans;
    }
};
