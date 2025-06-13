// User function template for C++
class Solution {
  public:
    
    void find(int index, int n, string &temp, vector<string> &ans, int &zerocount, int &onecount) {
        
        if(!temp.empty() and temp[0] == '0') {
            return;
        }
        
        if(zerocount > onecount) {
            return;
        }
        
        if(temp.size() == n) {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back('0');
        zerocount += 1;
        find(index+1,n,temp,ans,zerocount,onecount);
        temp.pop_back();
        zerocount -= 1;
        
        temp.push_back('1');
        onecount += 1;
        find(index+1,n,temp,ans,zerocount,onecount);
        temp.pop_back();
        onecount -= 1;
    }
  
    vector<string> NBitBinary(int n) {
    
        string temp = "";
        vector<string> ans;
        int index = 0;
    
        int zerocount = 0;
        int onecount = 0;
        
        find(index,n,temp,ans,zerocount,onecount);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};