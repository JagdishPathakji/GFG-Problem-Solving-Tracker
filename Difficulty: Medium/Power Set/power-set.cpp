class Solution {
  public:
  
    void findsubsets(string &s, int index, vector<string> &ans,string &temp) {
        
        if(index >= s.size()) {
            if(!temp.empty()) {
                ans.push_back(temp);
            }
            return;
        }

        temp.push_back(s[index]);
        findsubsets(s,index+1,ans,temp);
        temp.pop_back();
        findsubsets(s,index+1,ans,temp);
    }
    
    vector<string> AllPossibleStrings(string s) {
        
        
        vector<string> ans;
        int index = 0;
        string temp = "";
        findsubsets(s,index,ans,temp);
        
        sort(ans.begin(),ans.end());
        return ans;  
    }
};