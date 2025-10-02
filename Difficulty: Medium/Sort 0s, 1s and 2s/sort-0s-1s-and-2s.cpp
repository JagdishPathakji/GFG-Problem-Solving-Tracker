class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        int idx = 0;
        int low = 0;
        int high = arr.size()-1;
        
        while(idx <= high) {
            
            if(arr[idx] == 0) {
                swap(arr[idx],arr[low]);
                idx++;
                low++;
            }
            else if(arr[idx] == 2) {
                swap(arr[idx],arr[high]);
                high--;
            }
            else {
                idx++;
            }
        }
    }
};