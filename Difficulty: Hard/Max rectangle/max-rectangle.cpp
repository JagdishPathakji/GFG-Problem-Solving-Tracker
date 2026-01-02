class Solution {
  public:
    int maxArea(vector<vector<int>> &mat) {
        
        
        int maxi = INT_MIN;
        for(int i=0; i<mat.size(); i++) {
            
            if(i > 0) {
                for(int j=0; j<mat[i].size(); j++) {
                    if(mat[i][j] != 0) {
                        mat[i][j] += mat[i-1][j];
                    }
                }
            }
            
            vector<int> arr = mat[i];
            stack<int> st1;
            stack<int> st2;
            
            int n = arr.size();
            vector<int> v1(n,1);
            vector<int> v2(n,1);
            
            for(int i=n-1; i>=0; i--) {
                
                while(!st1.empty() && arr[st1.top()] >= arr[i]) {
                    v1[i] += v1[st1.top()];
                    st1.pop();
                }
                st1.push(i);
                
                while(!st2.empty() && arr[arr.size()-i-1] <= arr[st2.top()]) {
                    v2[arr.size()-i-1] += v2[st2.top()];
                    st2.pop();
                }
                st2.push(arr.size()-i-1);
            }
            
    
            for(int i=0; i<n; i++) {
                maxi = max(maxi, (v1[i]+v2[i]-1)*arr[i]);
            }
        
        }
        
        return maxi;
        
    }
};