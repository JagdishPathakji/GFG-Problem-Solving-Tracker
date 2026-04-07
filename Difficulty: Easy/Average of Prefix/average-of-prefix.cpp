// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        
        int sum = 0;
        vector<int> ans;
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
            ans.push_back(sum/(i+1));
        }
        
        return ans;
    }
};