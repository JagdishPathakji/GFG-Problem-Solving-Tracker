// User function Template for C++

class Solution {
  public:
    vector<int> querySum(int n, int arr[], int q, int queries[]) {
        
        vector<int> ans;
    
        vector<int> prefixSum(n);
        prefixSum[0] = arr[0];
        
        for(int i=1; i<n; i++) {
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        
        for(int i=0; i<2*q; i+=2) {
            
            int u = queries[i]-1;
            int v = queries[i+1]-1;
            
            ans.push_back(prefixSum[v]-prefixSum[u-1]);
        }
        
        return ans;
    }
};