// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    
    int sum(vector<int> &arr, int index, vector<int> &dp) {
        if(index >= arr.size()) return 0;
        
        if(dp[index] != -1)
        return dp[index];
        
        int steal = arr[index] + sum(arr,index+2,dp);
        int skip = sum(arr,index+1,dp);
        
        return dp[index] = max(steal,skip);
    }
    
    int findMaxSum(vector<int>& arr, int n) {
        // code here
    
        vector<int> dp(n+1,-1);
        
        return sum(arr,0,dp);
    }
};