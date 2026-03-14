class Solution {
  public:
    int minRemove(vector<int> &arr1, vector<int> &arr2) {
        
        unordered_map<int,int> mp1;
        for(int i=0; i<arr1.size(); i++)
        mp1[arr1[i]]++;
        
        unordered_map<int,int> mp2; 
        for(int i=0; i<arr2.size(); i++)
        mp2[arr2[i]]++;
        
        int cnt = 0;
        
        for(auto it = mp1.begin(); it != mp1.end(); it++) {
            int key = it->first;
            int value = it->second;
            
            if(mp2.find(key) != mp2.end()) {
                cnt += min(value,mp2[key]);   
            }
        }
        
        return cnt;
    }
};