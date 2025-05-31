class Solution {
  public:
    
    int sum(vector<int> &arr, int index, vector<int> &dp) {
        if(index >= arr.size()) return 0;
        
        if(dp[index] != -1)
        return dp[index];
        
        int steal = arr[index] + sum(arr,index+2,dp);
        int skip = sum(arr,index+1,dp);
        
        return dp[index] = max(steal,skip);
    }
  
    int findMaxSum(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> dp(n+1,-1);
        
        return sum(arr,0,dp);
        
    }
};