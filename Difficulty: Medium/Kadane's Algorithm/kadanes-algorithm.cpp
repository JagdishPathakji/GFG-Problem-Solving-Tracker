class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        
        int sum = 0;
        int maxi = INT_MIN;
        
        for(int i=0; i<arr.size(); i++) {
            
            if(sum+arr[i] >= arr[i]) {
                sum += arr[i];
            }
            else {
                sum = arr[i];
            }
            
            maxi = max(maxi,sum);
        }
        
        maxi = max(maxi,sum);
        return maxi;
    }
};