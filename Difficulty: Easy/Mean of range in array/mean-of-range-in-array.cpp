class Solution {
  public:
    vector<int> findMean(vector<int>& arr, vector<int>& q) {
    
        vector<int> prefixSum(arr.size());
        prefixSum[0] = arr[0];
        
        for(int i=1; i<arr.size(); i++) {
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        
        vector<int> ans;
        for(int i=0; i<q.size()/2; i++) {
            int u = q[2 * i];
            int v = q[2 * i + 1];
            
            if(u > v) {
                ans.push_back((prefixSum[u]-prefixSum[v-1])/(u-v+1));
            }
            else {
                ans.push_back((prefixSum[v]-prefixSum[u-1])/(v-u+1));
            }
        }
        
        return ans;
        
    }
};