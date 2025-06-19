class Solution {
  public:
    
    int find(int index1, string &s1, int index2, string &s2, vector<vector<int>> &dp) {
        
        if(index1 == 0 || index2 == 0)
        return 0;
        
        // 3 cases
        /*
        1. if values are same and index are same (split and return max)
        2. if values are same and index are different (1 + both decrease by 1)
        3. if values and different (split and return max)
        */
        
        if(dp[index1][index2] != -1)
        return dp[index1][index2];
        
        if(index1 == index2 || s1[index1-1] != s2[index2-1])
        return dp[index1][index2] = max(find(index1-1,s1,index2,s2,dp),find(index1,s1,index2-1,s2,dp));
        else if(s1[index1-1] == s2[index2-1])
        return dp[index1][index2]  = 1 + find(index1-1,s1,index2-1,s2,dp);
    }
  
    int LongestRepeatingSubsequence(string &s) {
        
        int n = s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return find(n,s,n,s,dp);
    }
};