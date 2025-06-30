class Solution {
  public:
    bool Search(vector<int>& arr, int key) {
        // Code here
        int start = 0;
        int end = arr.size()-1;
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            
            if(arr[mid] == key)
            return true;
            
            // extra case to handle duplicates
            if(arr[mid] == arr[start] and arr[mid] == arr[end]) {
                start++;
                end--;
            }
            else if(arr[mid] >= arr[start]) {
                if(arr[mid] > key and key >= arr[start]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }
            else {
                if(arr[mid] < key and key <= arr[end]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        
        return false;
    }
};