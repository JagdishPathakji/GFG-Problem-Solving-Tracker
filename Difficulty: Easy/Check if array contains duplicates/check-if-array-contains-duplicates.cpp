class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        
        unordered_set<int> us;
        for(int i=0; i<arr.size(); i++) {
            if(us.find(arr[i]) != us.end())
            return true;
            
            us.insert(arr[i]);
        }
        
        return false;
    }
};
