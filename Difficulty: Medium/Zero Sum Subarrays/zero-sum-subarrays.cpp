class Solution {
  public:
  
    int findSubarray(vector<int> &arr) {
        
        int sum = 0;
        int count = 0;
        unordered_map<int,int> mp;
        
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
            if(mp[sum] > 0) {
                count += mp[sum];
            }
            if(sum == 0) {
                count++;
            }
            mp[sum]++;
        }
        
        return count;
    }
};