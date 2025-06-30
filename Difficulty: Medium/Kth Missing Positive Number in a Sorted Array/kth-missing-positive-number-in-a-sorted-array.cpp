// User function template for C++

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        
        int start = 0;
        int end = arr.size()-1;
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            int kitne_missing_till_mid = (arr[mid]-(mid+1));
            
            if(kitne_missing_till_mid < k) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return start + k;
    }
};