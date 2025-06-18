class Solution {
  public:
    int nthStair(int n) {
        //  same as coin change II problem
        vector<int> coins = {1,2};
        vector<int> dp(n+1,0);
        dp[0] = 1;
        for(int i=1; i<=3; i++) {
            for(int j=1; j<=n; j++)  {
                if(dp[j] <= coins[i-1])
                dp[j] += dp[j-coins[i-1]];
            }
        }
    
        return dp[n];
    }
};