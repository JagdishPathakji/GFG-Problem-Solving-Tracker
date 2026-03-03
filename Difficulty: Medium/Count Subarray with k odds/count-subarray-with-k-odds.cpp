class Solution {
  public:
    int countSubarrays(vector<int>& arr, int k) {
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]%2 == 0) {
                arr[i] = 0;
            }
            else {
                arr[i] = 1;
            }
        }
        
        // now ques became : count subarray of sum k
        // [0,1,0,1]
        unordered_map<int,int> mp;
        mp[0] = 1;
        
        int sum = 0;
        int cnt = 0;
        
        for(int i=0; i<arr.size(); i++) {
            
            sum += arr[i];
            
            if(mp.find(sum-k) != mp.end()) {
                cnt += mp[sum-k];
            }
            
            mp[sum]++;
        }
        
        return cnt;
    }
};