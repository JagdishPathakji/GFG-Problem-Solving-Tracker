// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &fruits, int k) {
        
        
        unordered_map<int,int> mp;
        int i = 0;
        int j = 0;
        int n = fruits.size();
        int maxWindowSize = INT_MIN;
        int uniqnum = 0;
            
        while(j < n) {
            
            if(mp[fruits[j]] == 0) 
            uniqnum++;
            
            mp[fruits[j]]++;
            
            if(uniqnum > k) {
                while(uniqnum != k) {
                    mp[fruits[i]]--;
                    if(mp[fruits[i]] == 0)
                    uniqnum--;
                    
                    i++;
                }    
            }
        
            if(uniqnum == k) {
                maxWindowSize = max(maxWindowSize,j-i+1);
            }
            j++;
            
        }
        
        if(maxWindowSize == INT_MIN) return -1;
        return maxWindowSize;
    }
};