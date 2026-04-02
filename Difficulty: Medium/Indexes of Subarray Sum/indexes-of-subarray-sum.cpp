class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        
        int i=0; 
        int j=0;
        
        int sum = 0;
        while(j < arr.size()) {
            sum += arr[j];
            
            while(sum > target) {
                sum -= arr[i];
                i++;
            }
            
            if(sum == target)
            return {i+1,j+1};
            
            j++;
        }
        
        return {-1};
    }
};