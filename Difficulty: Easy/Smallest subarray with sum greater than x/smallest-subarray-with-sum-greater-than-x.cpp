class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
     
        int mini = INT_MAX;
        int sum = 0;
        int i = 0;
        int j = 0;
        
        while(j < arr.size()) {
            
            sum += arr[j];
            
            while(sum > x && i <= j) {
                mini = min(mini,j-i+1);
                sum -= arr[i];
                i++;
            }
            
            j++;
        }
        
        if(mini == INT_MAX)
        return 0;
        
        return mini;
    }
};