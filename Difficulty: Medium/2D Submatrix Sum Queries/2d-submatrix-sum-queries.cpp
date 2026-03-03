class Solution {
  public:
    vector<int> prefixSum2D(vector<vector<int>> &mat, vector<vector<int>> &queries) {
        
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[i].size(); j++) {
                if(i-1 >= 0)
                mat[i][j] += mat[i-1][j];   
            }
        }
        
        // 1 2 3
        // 1 1 0
        // 4 2 2
        
        // 1 3 6
        // 1 2 2
        // 4 6 8
        
        // 1 3 6
        // 2 5 8
        // 6 11 16
        
            
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[i].size(); j++) {
                if(j-1 >= 0)
                mat[i][j] += mat[i][j-1];   
            }
        }
        
        vector<int> ans;
        for(int i=0; i<queries.size(); i++) {
            int r1 = queries[i][0];
            int c1 = queries[i][1];
            
            int r2 = queries[i][2];
            int c2 = queries[i][3];
            
            // formula is there
            int sum = mat[r2][c2];
            if(r1 > 0) sum -= mat[r1-1][c2];
            if(c1 > 0) sum -= mat[r2][c1-1];
            if(r1 > 0 && c1 > 0) sum += mat[r1-1][c1-1];
            
            ans.push_back(sum);
        }
        
        return ans;
    }
};
