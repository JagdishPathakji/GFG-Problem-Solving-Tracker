// User function template for C++
class Solution {
  public:
    int maxSubstring(string S) {
        
        // CONVERT 
        // 0 -> -1
        // 1 -> 1
        // AND FIND MIN SUBARRAY SUM
        
        // OR
        // CONVERT 0 -> 1
        // 1 -> -1
        // AND FIND MAX SUBARRY SUM
        vector<int> v;
        for(int i=0; i<S.size(); i++) {
            if(S[i] == '0') {
                v.push_back(1);
            }
            else if(S[i] == '1') {
                v.push_back(-1);
            }
        }
        
        int maxi = INT_MIN;
        int sum = 0;
        
        for(int i=0; i<v.size(); i++) {
            
            sum += v[i];
        
            maxi = max(maxi,sum);
            if(sum < 0) {
                sum = 0;
            }
        }
        
        if(maxi == INT_MIN)
        return -1;
        
        return maxi;
    }
};