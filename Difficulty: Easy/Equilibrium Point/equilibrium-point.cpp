class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        
        int rightSum = 0;
        for(int i=0; i<arr.size(); i++)
        rightSum += arr[i];
        
        int leftSum = 0;
        for(int i=0; i<arr.size(); i++) {
            if(leftSum == (rightSum-arr[i])) {
                return i;
            }
            
            leftSum += arr[i];
            rightSum -= arr[i];
        }
        
        return -1;
    }
};