class Solution {
  public:

    int findways(int pos, int n, vector<int> &dp) {
        
        if(pos == n) 
        return 1;
        if(pos > n) 
        return 0;
        
        if(dp[pos] != -1)
        return dp[pos];
        
        return dp[pos] = findways(pos+1,n,dp) + findways(pos+2,n,dp);
    }
  
    int countWays(int n) {
        
        vector<int> dp(n+1,-1);
        return findways(0,n,dp);

    }
};
