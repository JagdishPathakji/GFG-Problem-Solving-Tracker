class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        
        int left = -1;
        int right = -1;
        
        int start = 0;
        int end = arr.size()-1;
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            
            if(arr[mid] == x) {
                left = mid;
                end = mid - 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        
        start = 0;
        end = arr.size()-1;
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            
            if(arr[mid] == x) {
                right = mid;
                start = mid + 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return {left,right};
    }
};