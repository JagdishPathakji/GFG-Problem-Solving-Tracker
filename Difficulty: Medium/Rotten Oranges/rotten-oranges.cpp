class Solution {
  public:
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int timer = 0;
        queue<pair<int,int>> q;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j] == 2)
                q.push({i,j});
            }
        }

        while(!q.empty()) {

            int k = q.size();
            bool infected = false;
            while(k--) {

                auto node = q.front();
                q.pop();

                int i = node.first;
                int j = node.second;

                if(i-1 >= 0 and grid[i-1][j] == 1) {
                    grid[i-1][j] = 2;
                    q.push({i-1,j});
                    infected = true;
                }
                if(j+1 < grid[i].size() and grid[i][j+1] == 1) {
                    grid[i][j+1] = 2;
                    q.push({i,j+1});
                    infected = true;
                }
                if(i+1 < grid.size() and grid[i+1][j] == 1) {
                    grid[i+1][j] = 2;
                    q.push({i+1,j});
                    infected = true;
                }
                if(j-1 >= 0 and grid[i][j-1] == 1) {
                    grid[i][j-1] = 2;
                    q.push({i,j-1});
                    infected = true;
                }
            }

            if(infected)
            timer++;
        }

        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j] == 1)
                return -1;
            }
        }

        return timer;
    
    }
};