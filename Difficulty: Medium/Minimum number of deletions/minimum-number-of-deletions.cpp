class Solution {
  public:
    int minDeletions(string &s1) {
        
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        
        int n = s1.size();
        int m = s2.size();
        
        vector<int>dp(m+1,0);
        int prev,curr;
        for(int i=1; i<=n; i++) {
            prev = 0,curr = 0;
            for(int j=1; j<=m; j++) {
                prev = curr;
                curr = dp[j];
                if(s1[i-1] == s2[j-1])
                dp[j] = 1 + prev;
                else
                dp[j] = max(dp[j],dp[j-1]);
            }
        }
        
        return (n-dp[m]);
    }
};