// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
        int n = arr.size();
        if(n == 1)
        return 0;
        
        if(arr[0] < arr[1] and arr[0] < arr[n-1])
        return 0;
        
        if(arr[n-1] < arr[n-2] and arr[n-1] < arr[0])
        return n-1;
        
        int start = 0;
        int end = n-1;
        int ans;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(arr[mid] < arr[mid-1] and arr[mid] < arr[mid+1]) {
                return mid;
            }
            else if(arr[start] <= arr[end]) {
                start++;
            }
            else {
                ans = end;
                end = end - 1;
            }
        }
        
        return ans;
    }
};
