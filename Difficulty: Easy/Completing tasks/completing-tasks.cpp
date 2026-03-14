// User function Template for C++

class Solution {
  public:
    vector<vector<int>> findTasks(vector<int>& arr, int k) {
        
        set<int> s(arr.begin(),arr.end());
        
        vector<vector<int>> v(2);
        bool one = true;
        
        for(int i=1; i<=k; i++) {
            
            if(s.find(i) == s.end()) {
                if(one) {
                    v[0].push_back(i);
                }            
                else {
                    v[1].push_back(i);
                }
                one = !one;
            }   
            
        }
        
        return v;
    }
};