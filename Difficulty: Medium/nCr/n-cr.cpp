class Solution {
  public:
    int nCr(int n, int r) {
        
        if(r > n) return 0;
        
        vector<vector<int>> dp(n+1, vector<int>(n+1));
        
        for(int i=0; i<=n; i++) {
            dp[i][i] = 1;
            dp[i][0] = 1;
        }
        
        for(int i=2; i<=n; i++) {
            for(int j=1; j<i; j++) {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        
        return dp[n][r];
    }
};