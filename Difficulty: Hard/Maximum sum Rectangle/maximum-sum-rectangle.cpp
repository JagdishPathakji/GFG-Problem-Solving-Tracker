class Solution {
  public:
    
    int kadane(vector<int> &arr) {
        
        int sum = 0;
        int maxi = INT_MIN;
        
        for(int i=0; i<arr.size(); i++) {
                
            sum += arr[i];
            maxi = max(sum,maxi);
            
            if(sum < 0)
            sum = 0;
        }
        
        return maxi;
    }
  
    int maxRectSum(vector<vector<int>> &mat) {
        
        int maxi = INT_MIN;
        for(int i=0; i<mat[0].size(); i++) {
            vector<int> v(mat.size());
            for(int j=i; j<mat[0].size(); j++) {
                
                for(int k=0; k<v.size(); k++) {
                    v[k] += mat[k][j];         
                }
                
                maxi = max(maxi,kadane(v));
                
            }
        }
        
        return maxi;
    }
};
