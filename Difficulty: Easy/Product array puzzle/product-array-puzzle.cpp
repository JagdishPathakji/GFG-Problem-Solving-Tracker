class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        
        int prefixMul = 1;
        vector<int> ans;
        
        int contains0 = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] != 0) {
                prefixMul *= arr[i];
            }
            else {
                contains0++;
            }
        }
        
        for(int i=0; i<arr.size(); i++) {
            if(contains0 == 1) {
                if(arr[i] == 0) {
                    ans.push_back(prefixMul);
                }
                else {
                    ans.push_back(0);
                }
            }
            else if(contains0 > 1) {
                ans.push_back(0);
            }
            else {
                ans.push_back(prefixMul/arr[i]);
            }
        }
         
        return ans;
    }
};
