class Solution {
  public:
    int findMin(vector<int>& arr) {
        
        int n = arr.size();
        if(n == 1)
        return arr[0];
        
        if(arr[0] < arr[1] and arr[0] < arr[n-1])
        return arr[0];
        
        if(arr[n-1] < arr[n-2] and arr[n-1] < arr[0])
        return arr[n-1];
        
        int start = 0;
        int end = n-1;
        int ans;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(arr[mid] < arr[mid-1] and arr[mid] < arr[mid+1]) {
                return arr[mid];
            }
            else if(arr[start] <= arr[end]) {
                start++;
            }
            else {
                ans = arr[end];
                end = end - 1;
            }
        }
        
        return ans;
    }
};