class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int> ans;
        vector<int> prefixSum(arr.size());
        
        prefixSum[0] = arr[0];
        for(int i=1; i<arr.size(); i++) {
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        
        for(int i=0; i<queries.size(); i++) {
            int u = queries[i][0];
            int v = queries[i][1];
            
            ans.push_back(prefixSum[v]-prefixSum[u-1]);
        }
        
        return ans;
    }
};