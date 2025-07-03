class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        
        if(k > arr.size()) return -1;
        
        int maxi=INT_MIN,sum=0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > maxi) {
                maxi = arr[i];
            }
            sum += arr[i];
        }
        
        int start = maxi;
        int end = sum;
        int ans = -1;
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            
            int page = 0, count = 1;
            for(int i=0; i<arr.size(); i++) {
                page = page + arr[i];
                if(page > mid) {
                    count++;
                    page = arr[i];
                }
            }
            
            
            if(count <= k) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;        
            }
        }
        
        
        
        return ans;
    }
};