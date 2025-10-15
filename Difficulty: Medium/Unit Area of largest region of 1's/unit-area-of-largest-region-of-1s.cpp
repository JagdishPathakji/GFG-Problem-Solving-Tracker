class Solution {
  public:
    // Function to find unit area of the largest region of 1s.
    int x[8] = {-1,-1,-1,0,0,1,1,1};
    int y[8] = {-1,0,1,-1,1,-1,0,1};
    
    void DFS(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &visited, int &count) {
        
        visited[i][j] = true;
        count++;
        
        for(int k=0; k<8; k++) {
            if(i+x[k] < grid.size() && j+y[k] < grid[0].size() && i+x[k] >= 0 && j+y[k] >= 0 && !visited[i+x[k]][j+y[k]] && grid[i+x[k]][j+y[k]] == 1)
            DFS(i+x[k],j+y[k],grid,visited,count);
        }
    }

    int findMaxArea(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        
        vector<vector<bool>> visited(rows, vector<bool>(cols,false));
        
        int ans = 0;
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(!visited[i][j] && grid[i][j] == 1) {
                    int count = 0;
                    DFS(i,j,grid,visited,count);
                    ans = max(ans,count);
                }
            }
        }
        
        return ans;
    }
};