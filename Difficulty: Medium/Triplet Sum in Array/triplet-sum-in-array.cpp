class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        
        for(int i=0; i<arr.size()-2;  i++) {
            
            int idx = i;
            
            int start = i+1;
            int end = arr.size()-1;
            
            int newtarget = target - arr[idx];
            
            while(start < end) {
                
                if(arr[start]+arr[end] == newtarget)
                return true;
                else if(arr[start] + arr[end] < newtarget)
                start = start + 1;
                else
                end = end - 1;
            }
        }
        
        return false;
    }
};