class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        
        unordered_map<int,int> mp;
        int smallest_index = INT_MAX;
        for(int i=0; i<arr.size(); i++) {
            
            if(mp.find(arr[i]) != mp.end()) {
                smallest_index = min(smallest_index,mp[arr[i]]+1);
            }
            
            mp[arr[i]] = i;
        }
        
        if(smallest_index == INT_MAX)
        return -1;
        
        return smallest_index;
    }
};