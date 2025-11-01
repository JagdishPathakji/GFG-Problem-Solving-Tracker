// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        
        unordered_map<long long,bool> mp;
        
        int i = 0;
        while(i < arr.size()) {
            
            if(arr[i] == 0 && x == 0) return 1;
            if(arr[i] == 0) {
                i++;
                continue;
            }
            
            long long target = x/arr[i];
            
            if(x % arr[i] == 0) {
                if(mp.find(target) != mp.end()) {
                    return true;   
                }
                
            }
            mp[arr[i]] = true;
            i++;
        }
        
        return false;
    }
};