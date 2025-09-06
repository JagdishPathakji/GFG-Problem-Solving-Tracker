class Solution {
  public:
    
    int find(int index, vector<int> &arr, vector<int> &dp) {
        
        if(index >= arr.size()) return 0;
        
        if(dp[index] != -1)
        return dp[index];
        
        int taken = arr[index] + find(index+2,arr,dp);
        int left = find(index+1,arr,dp);
        
        return dp[index] = max(taken,left);
    }
  
    int findMaxSum(vector<int>& arr) {
        
        vector<int> dp(arr.size()+1,-1);
        return find(0,arr,dp);
    }
};