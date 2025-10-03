class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        long long int start = 1;
        long long int end = n;
        long long int ans;
        
        while(start <= end) {
            
            long long int mid = start + (end - start)/2;
            
            if(mid * mid * mid == n) {
                return mid;
            }
            else if(mid * mid * mid < n) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return ans;
    }
};