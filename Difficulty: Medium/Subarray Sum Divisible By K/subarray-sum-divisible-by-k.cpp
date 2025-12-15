class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    int subCount(vector<int>& arr, int k) {
        
        unordered_map<int,int> mp;
        int total = 0;
        
        long long prefixSum = 0;
        for(int i=0; i<arr.size(); i++) {
            
            prefixSum += arr[i];
            int rem = prefixSum % k;
            
            if(rem < 0)
            rem = rem + k;
            
            if(prefixSum%k == 0)
            total++;
            
            if(mp[rem] >= 1)
            total += mp[rem];
            
            mp[rem]++;
        }
        
        return total;
    }
};
