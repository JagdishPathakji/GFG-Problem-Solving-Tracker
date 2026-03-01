class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        
        int sum = 0;
        for(int i=0; i<arr.size(); i++)
        sum += arr[i];
        
        int currSum = 0;
        for(int i=0; i<arr.size(); i++) {
            currSum += arr[i];
            if(sum-2*currSum == 0 && i != arr.size()-1)
            return true;
        }
        
        return false;
    }
};
