class Solution {
  public:
  
    int find(int n, vector<int> &dp) {
        
        if(dp[n] != -1)
        return dp[n];
        
        return dp[n] = find(n-1,dp) + find(n-2,dp);
    }
  
    int countWays(int n) {
        
        if(n <= 2)
        return n;
        
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        
        find(n,dp);
        return dp[n];
    }
};
