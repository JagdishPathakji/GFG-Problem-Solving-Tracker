class Solution {
  public:
    long long findMaxSubarraySum(vector<int>& arr, long long x) {
        
        long long sum = 0;
        int i = 0;
        int j = 0;
        int n = arr.size();
        long long maxi = 0;
        
        while(j < n) {
            
            sum += arr[j];
            

            while(i < j && sum > x) {
                sum -= arr[i];
                i++;
            }

            if(sum <= x) {
                maxi = max({maxi,sum});
            }

            j++;
        }
        
        return maxi;
    }
};
