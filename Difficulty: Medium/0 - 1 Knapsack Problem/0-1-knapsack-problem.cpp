class Solution {
  public:
    
    int find(int i, int W, vector<int> &wt, vector<int> &val, vector<vector<int>> &dp) {
        
        if(i == wt.size()) return 0;
        
        if(dp[i][W] != -1) return dp[i][W];
        
        int take = INT_MIN,leave;
        
        if(wt[i] <= W)
        take = val[i] + find(i+1,W-wt[i],wt,val,dp);
        leave = find(i+1,W,wt,val,dp);
        
        return dp[i][W] = max(take,leave);
    }
  
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        vector<vector<int>> dp(wt.size()+1, vector<int>(W+1,-1));
        return find(0,W,wt,val,dp);
    }
};