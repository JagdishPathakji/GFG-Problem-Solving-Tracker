class Solution {
  public:
    int countSubarray(vector<int>& arr) {
     
        int n = arr.size();
        unordered_map<int,int> mp;
        int count = 0;
        int sum = 0;
        
        for(int i=0; i<n; i++) {
            if(arr[i] == 0) arr[i] = -1;
        }
        
        for(int i=0; i<n; i++) {
            
            sum += arr[i];
            
            if(sum == 0) {
                count++;
            }
            
            count += mp[sum];
            mp[sum]++;
        }
        
        return count;
    }
};