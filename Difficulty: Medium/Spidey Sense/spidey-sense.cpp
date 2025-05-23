class Solution {

  public:
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) {
        // Your code goes here
        vector<vector<int>> ans(M, vector<int>(N));
        
        queue<pair<int,int>> q;
        for(int i=0; i<M; i++) {
            for(int j=0; j<N; j++) {
                if(matrix[i][j] == 'B')
                q.push({i,j});
                if(matrix[i][j] == 'W')
                ans[i][j] = -1;
                if(matrix[i][j] == 'B')
                ans[i][j] = 0;
                if(matrix[i][j] == 'O')
                ans[i][j] = INT_MAX;
            }
        }
        
        while(!q.empty()) {
            
            auto node = q.front();
            q.pop();
            
            int i = node.first;
            int j = node.second;
            
            if(i+1 < ans.size() and ans[i+1][j] != -1 and ans[i+1][j] != 0) {
                if(ans[i+1][j] > ans[i][j] + 1) {
                    ans[i+1][j] = ans[i][j] + 1;
                    q.push({i+1,j});
                }
            }
            if(i-1 >= 0 and ans[i-1][j] != -1 and ans[i-1][j] != 0) {
                if(ans[i-1][j] > ans[i][j] + 1) {
                    ans[i-1][j] = ans[i][j] + 1;
                    q.push({i-1,j});
                }
            }
            if(j-1 >= 0 and ans[i][j-1] != -1 and ans[i][j-1] != 0) {
                if(ans[i][j-1] > ans[i][j] + 1) {
                    ans[i][j-1] = ans[i][j] + 1;
                    q.push({i,j-1});
                }   
            }
            if(j+1 < ans[i].size() and ans[i][j+1] != -1 and ans[i][j+1] != 0) {
                if(ans[i][j+1] > ans[i][j] + 1) {
                    ans[i][j+1] = ans[i][j] + 1;
                    q.push({i,j+1});
                }   
            }
            
        }
        
        for(int i=0; i<M; i++) {
            for(int j=0; j<N; j++) {
                if(ans[i][j] == INT_MAX)
                ans[i][j] = -1;
            }
        }
        
        return ans;
    }
};