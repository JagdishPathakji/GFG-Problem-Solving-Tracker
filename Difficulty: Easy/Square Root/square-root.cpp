class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int start = 1;
        int end = n;
        int mid;
        int ans;
        
        while(start <= end) {
            
            mid = start + (end - start)/2;
            mid = floor(mid);
            if(mid*mid == n) {
                ans = mid;
                break;
            }
            else if(mid*mid < n) {
                ans = mid;
                start =  mid + 1;   
            }
            else {
                end = mid - 1;
            }
        }
        
        return ans;
    }
};