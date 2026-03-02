class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        
        // if the contiguous sum is same -> take the len
        // if the diff betn sum is observed before means somewhere sum is same -> take the len
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        int sum1 = 0;
        int sum2 = 0;
        int len = 0;
        
        for(int i=0; i<a1.size(); i++) {
            
            sum1 += a1[i];
            sum2 += a2[i];
            
            int diff = sum1 - sum2;
            if(mp.find(diff) != mp.end()) {
                len = max(len,i-mp[diff]);
            }
            else {
                mp[diff] = i;
            }
            
        }
        
        return len;
    }
};