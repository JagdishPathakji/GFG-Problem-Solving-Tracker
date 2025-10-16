class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        int i = 0;
        int j = 0;
        
        vector<int> ans;
        
        while(i < a.size() && j < b.size()) {
            if(ans.size() == 0) {
                if(a[i] < b[j]) {
                    ans.push_back(a[i]);
                    i++;
                }
                else {
                    ans.push_back(b[j]);
                    j++;
                }
            }
            else if(a[i] < b[j]) {
                if(ans.size() != 0 && ans.back() != a[i]) {
                    ans.push_back(a[i]);
                }
                i++;
            }
            else {
                if(ans.size() != 0 && ans.back() != b[j]) {
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        
        // jo a na elements baki hoi to ene lai levana
        while(i < a.size()) {
            if(ans.size() != 0 && ans.back() != a[i]) 
            ans.push_back(a[i]);
            
            i++;
        }
        
        // jo b na elements baki hoi to ene lai levana
        while(j < b.size()) {
            if(ans.size() != 0 &&  ans.back() != b[j])
            ans.push_back(b[j]);
            
            j++;
        }
        
        return ans;
    }
};