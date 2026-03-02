class Solution {
  public:
    int equalSum(vector<int> &arr) {
        
        int sum = 0;
        for(int i=0; i<arr.size(); i++)
        sum += arr[i];
        
        int currsum = 0;
        for(int i=0; i<arr.size(); i++) {
            if(sum-arr[i]-2*currsum == 0 && i != arr.size())
            return i;
            
            currsum += arr[i];
        }
        
        return -1;
    }
};
