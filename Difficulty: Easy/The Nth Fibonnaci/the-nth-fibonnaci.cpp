class Solution {
  public:
    const long long mod = 10;
    long long find(int N, vector<long long> &dp) {
        
        if(N <= 1)
        return N;
        
        if(dp[N] != -1)
        return dp[N];
        
        return dp[N] = (find(N-1,dp) + find(N-2,dp))%mod;
    }
  
    int fib(int N) {
        
        vector<long long> dp(N+1,-1);
        dp[0] = 0;
        dp[1] = 1;
        
        find(N,dp);
        return dp[N];
    }
};