class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        ans.push_back(arr[0]);
        
        int i = 1;
        
        while(i < arr.size()) {
            if(arr[i] != ans.back())
            ans.push_back(arr[i]);
            
            i++;
        }
        
        return ans;
    }
};