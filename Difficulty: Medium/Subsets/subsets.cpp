class Solution {
  public:
    vector<vector<int>> subsets(vector<int>& arr) {
        
        vector<vector<int>> ans;
        
        for(int i=0; i<pow(2,arr.size()); i++) {
            vector<int> v;
            int num = i;
            // 0010
            for(int j=0; j<arr.size(); j++) {
                int t = num >> j;
                int n = t & 1;
                if(n == 1) {
                    v.push_back(arr[j]);
                }
            }       
            ans.push_back(v);
        }
        
        return ans;
    }
};