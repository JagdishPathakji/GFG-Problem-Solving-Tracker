// User function Template for C++

class Solution {
  public:
    
    int longestPalinSubseq(string &text1) {
        
        int n = text1.size();
        string text2 = text1;
        reverse(text2.begin(),text2.end());
        
        vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(text1[i-1] == text2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
                else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[n][n];
    }
};