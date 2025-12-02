// User function Template for C++

class Solution {
  public:
  
    int GCD(int a, int b) {
        
        if(b == 0)
        return a;
        
        return GCD(b,a%b);
    }
    
    int maxBinTreeGCD(vector<vector<int>> &arr, int N) {
        
        int ans = 0;
        
        if(arr.size() <= 1)
        return 0;
        
        unordered_map<int, vector<int>> mp;
        
        for(int i=0; i<arr.size(); i++) {
            int o = arr[i][0];
            int t = arr[i][1];
            
            mp[o].push_back(t);
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++) {
            
            if((it->second).size() == 2) {
                ans = max(ans,GCD(it->second[0],it->second[1]));
            }
        }
        
        return ans;
    }
};