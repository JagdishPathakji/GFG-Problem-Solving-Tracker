// User function template for C++

class Solution {
  public:
    // Function to find length of shortest common supersequence of two strings.
    int find(int i, string &s1, int j, string &s2, vector<vector<int>> &dp) {
        
        if(i == 0 || j == 0) return 0;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        if(s1[i-1] == s2[j-1]) {
            return dp[i][j] = 1 + find(i-1,s1,j-1,s2,dp);
        }
        else {
            return dp[i][j] = max(find(i-1,s1,j,s2,dp),find(i,s1,j-1,s2,dp));
        }
    }
    
    int shortestCommonSupersequence(string &s1, string &s2) {
        
        // ans = (n + m - lcs)
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int lcs = find(n,s1,m,s2,dp);
        
        return (n + m - lcs);
    }
};