class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        
        int start = 0;
        int end = arr.size()-1;
        
        int ans = -1;
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            
            if(arr[mid] == k) {
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid] < k)
            start = mid + 1;
            else
            end = mid - 1;
        }
        
        
        return ans;
    }
};