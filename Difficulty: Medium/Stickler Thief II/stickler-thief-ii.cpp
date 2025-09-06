class Solution {
  public:
    
    int find(int index, int size, vector<int> &arr, vector<int> &dp) {
        
        if(index > size)
        return 0;
        
        if(dp[index] != -1)
        return dp[index];
        
        int taken = arr[index] + find(index+2,size,arr,dp);
        int left = find(index+1,size,arr,dp);
        
        return dp[index] = max(taken,left);
    }
    
    int maxValue(vector<int>& arr) {
        
        vector<int> dp1(arr.size()+1,-1);
        vector<int> dp2(arr.size()+1,-1);
        
        int ans1 = find(0,arr.size()-2,arr,dp1);
        int ans2 = find(1,arr.size()-1,arr,dp2);
        
        return max(ans1,ans2);
    }
};
