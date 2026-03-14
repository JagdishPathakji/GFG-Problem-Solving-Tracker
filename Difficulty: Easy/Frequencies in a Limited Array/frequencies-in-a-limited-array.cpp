class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        for(int i=0; i<arr.size(); i++)
        mp[arr[i]]++;
        
        vector<int> ans;
        for(int i=1; i<=arr.size(); i++) {
            if(mp.find(i) != mp.end())
            ans.push_back(mp[i]);
            else
            ans.push_back(0);
        }
        
        
        return ans;
    }
};
