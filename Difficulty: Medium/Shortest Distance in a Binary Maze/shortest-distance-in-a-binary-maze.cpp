// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        int X = destination.first;
        int Y = destination.second;
        
        int x = source.first;
        int y = source.second;
        
        if(grid[x][y] != 1) return -1;
        if(grid[X][Y] != 1) return -1;
        
        if(X == x and Y == y) return 0;
        
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
        pq.push(make_tuple(0,x,y));
        
        vector<vector<int>> distance(grid.size(), vector<int>(grid[0].size(),INT_MAX));
        vector<vector<bool>> explored(grid.size(), vector<bool>(grid[0].size(),false));
        
        while(!pq.empty()) {
            
            auto top = pq.top();
            pq.pop();
    
            int w = get<0>(top);
            int i = get<1>(top);
            int j = get<2>(top);
            
            if(explored[i][j])
            continue;
            
            explored[i][j] = 1;
            
            if(i+1 < grid.size() and grid[i+1][j] == 1) {
                int total = w + 1;
                if(distance[i+1][j] > w + 1) {
                    distance[i+1][j] = w + 1;    
                    pq.push(make_tuple(w+1,i+1,j));
                }
            }
            if(i-1 >=0 and grid[i-1][j] == 1) {
                int total = w + 1;
                if(distance[i-1][j] > w + 1) {
                    distance[i-1][j] = w + 1;    
                    pq.push(make_tuple(w+1,i-1,j));
                }
            }
            if(j-1 >= 0 and grid[i][j-1] == 1) {
                int total = w + 1;
                if(distance[i][j-1] > w + 1) {
                    distance[i][j-1] = w + 1;    
                    pq.push(make_tuple(w+1,i,j-1));
                }
            }
            if(j+1 < grid[i].size() and grid[i][j+1] == 1) {
                int total = w + 1;
                if(distance[i][j+1] > w + 1) {
                    distance[i][j+1] = w + 1;    
                    pq.push(make_tuple(w+1,i,j+1));
                }
            }
            
        }
        
        if(distance[X][Y] == INT_MAX)
        return -1;
        
        return distance[X][Y];
    
    }
};
