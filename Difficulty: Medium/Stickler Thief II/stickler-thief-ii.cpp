class Solution {
  public:
    
    int find(int index, vector<int> &arr, bool takefirst, vector<int> &dp) {
        
        if(takefirst and index == arr.size()-1)
        return 0;
        
        if(index >= arr.size())
        return 0;
        
        if(dp[index] != -1)
        return dp[index];
        
        int steal = arr[index] + find(index+2,arr,takefirst,dp);
        int skip = find(index+1,arr,takefirst,dp);
        
        return dp[index] = max(steal,skip);
    }
  
    int maxValue(vector<int>& arr) {
        
        vector<int> dp1(arr.size()+2,-1);
        vector<int> dp2(arr.size()+2,-1);
        
        return max(find(0,arr,true,dp1),find(1,arr,false,dp2));
    }
};
