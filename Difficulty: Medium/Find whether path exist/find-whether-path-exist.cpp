
class Solution {
  public:
    // Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) {
        // code here
        pair<int,int> src;
        pair<int,int> dest;
        
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j] == 1) {
                    src = make_pair(i,j);
                }
                if(grid[i][j] == 2) {
                    dest = make_pair(i,j);
                }
            }
        }
        
        queue<pair<int,int>> q;
        q.push(src);
        
        while(!q.empty()) {
                
            auto node = q.front();
            q.pop();
        
            int i = node.first;
            int j = node.second;
            
            if(grid[i][j] == 2)
            return 1;
            
            grid[i][j] = 0;
            
            if(i+1 < grid.size() and grid[i+1][j] != 0) {
                if(grid[i+1][j] == 2)
                return 1;
                if(grid[i+1][j] == 3) {
                    q.push({i+1,j});
                    grid[i+1][j] = 0;
                }
            }
            if(i-1 >= 0 and grid[i-1][j] != 0) {
                if(grid[i-1][j] == 2)
                return 1;
                if(grid[i-1][j] == 3) {
                    q.push({i-1,j});
                    grid[i-1][j] = 0;
                }
            }
            if(j+1 < grid[i].size() and grid[i][j+1] != 0) {
                if(grid[i][j+1] == 2)
                return 1;
                if(grid[i][j+1] == 3) {
                    q.push({i,j+1});
                    grid[i][j+1] = 0;
                }
            }
            if(j-1 >= 0 and grid[i][j-1] != 0) {
                if(grid[i][j-1] == 2)
                return 1;
                if(grid[i][j-1] == 3) {
                    q.push({i,j-1});
                    grid[i][j-1] = 0;
                }
            }
        }
        
        return false;
    }
};