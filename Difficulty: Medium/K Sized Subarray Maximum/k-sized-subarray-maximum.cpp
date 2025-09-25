class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    
        int n = arr.size();    
        vector<int> ans;
        
        int i = 0;
        int j = 0;
        
        multiset<int> s;
        
        while(i < n) {
            
            s.insert(arr[i]);
            
            
            if(s.size() > k) {
                s.erase(s.find(arr[j]));
                j++;
            }
            
            if(s.size() == k) {
                ans.push_back(*s.rbegin());
            }
            
            i++;
        }
        
        return ans;
    }
};