class Solution {
  public:
    
    int find(int index, int capacity, vector<int> &val, vector<int> &wt, vector<vector<int>> &dp) {
        
        if(index <= 0)
        return 0;
        
        if(dp[index][capacity] != -1)
        return dp[index][capacity];
        
        if(capacity < wt[index-1])
        return dp[index][capacity] = find(index-1,capacity,val,wt,dp);
        else
        return dp[index][capacity] = max(val[index-1] + find(index-1,capacity-wt[index-1],val,wt,dp),find(index-1,capacity,val,wt,dp));
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        int n = val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,0));
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=W; j++) {
                if(j < wt[i-1])
                dp[i][j] = dp[i-1][j];
                else
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
        }
        
        return dp[n][W];
    }
};