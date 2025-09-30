class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        
        int start = 0;
        int end = arr.size()-1;
        
        while(start < end) {
            
            if(arr[start]+arr[end] == target)
            return true;
            else if(arr[start]+arr[end] < target)
            start = start + 1;
            else
            end = end - 1;
        }
        
        
        return false;
    }
};