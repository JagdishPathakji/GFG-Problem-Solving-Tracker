class Solution {
  public:
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        int n = val.size();
        vector<int> dp(W+1,0);
        
        for(int i=1; i<=n; i++) {
            for(int j=W; j>=1; j--) {
                if(j >= wt[i-1])
                dp[j] = max(dp[j],val[i-1]+dp[j-wt[i-1]]);
            }
        }
        
        return dp[W];
    }
};