class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        
        int maxi = INT_MIN;
        int sum = 0;
        
        int j = 0;
        int i = 0;
        
        while(j < arr.size()) {
                
            sum += arr[j];
            
            if(j-i+1 > k) {
                sum -= arr[i];
                i++;
            }
            
            if(j-i+1 == k) {
                maxi = max(maxi,sum);
            }
            
            j++;
        }
        
        return maxi;
    }
};