class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        
        long long ans = 0;
        long long int mult = 1;
        
        if(k == 1)
        return 0;
        
        int i = 0;
        int j = 0;
        
        while(j < n) {
            
            mult *= arr[j];
            
            if(mult < k) {
                ans += (j-i+1);
            }
            else {
                while(i <= j && mult >= k) {
                    mult /= arr[i];
                    i++;
                }
                ans += (j-i+1);
            }
            
            j++;
        }
        
        return ans;
    }
};