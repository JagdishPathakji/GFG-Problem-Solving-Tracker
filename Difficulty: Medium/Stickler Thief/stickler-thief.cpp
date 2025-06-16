class Solution {
  public:
    
    int find(int index ,vector<int> &arr, vector<int> &dp) {
        
        if(index >= arr.size()) {
            return 0;
        }
        
        if(dp[index] != -1)
        return dp[index];
        
        int steal = arr[index] + find(index+2,arr,dp);
        int skip = find(index+1,arr,dp);
        
        return dp[index] = max(steal,skip);
        
    }
    
    int findMaxSum(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> dp(n+1,-1);
        return find(0,arr,dp);
    }
};