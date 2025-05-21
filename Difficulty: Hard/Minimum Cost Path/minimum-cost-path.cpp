

class Solution {
  public:
        int minimumCostPath(vector<vector<int>>& grid) {
            
            int n = grid.size();
            priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
            pq.push(make_tuple(grid[0][0],0,0));        
        
            vector<vector<int>> distance(n, vector<int>(n,INT_MAX));
            vector<vector<bool>> explored(n, vector<bool>(n,false));
            distance[0][0] = grid[0][0];
            
            while(!pq.empty()) {
                
                auto top = pq.top();
                pq.pop();
                int w = get<0>(top);
                int i = get<1>(top);
                int j = get<2>(top);
                
                if(explored[i][j]) {
                    continue;
                }
                
                explored[i][j] = 1;
                
                if(i+1 < grid.size() and !explored[i+1][j]) {
                    int newcost = w + grid[i+1][j];
                    if(newcost < distance[i+1][j]) {
                        distance[i+1][j] = newcost;
                        pq.push(make_tuple(newcost,i+1,j));
                    }
                    
                }
                if(i-1 >=0 and !explored[i-1][j]) {
                    int newcost = w + grid[i-1][j];
                    if(newcost < distance[i-1][j]) {
                        distance[i-1][j] = newcost;
                        pq.push(make_tuple(newcost,i-1,j));
                    }
                    
                }
                if(j+1 < grid[i].size() and !explored[i][j+1]) {
                    int newcost = w + grid[i][j+1];
                    if(newcost < distance[i][j+1]) {
                        distance[i][j+1] = newcost;
                        pq.push(make_tuple(newcost,i,j+1));
                    }
                    }
                if(j-1 >= 0 and !explored[i][j-1]) {
                    int newcost = w + grid[i][j-1];
                    if(newcost < distance[i][j-1]) {
                        distance[i][j-1] = newcost;
                        pq.push(make_tuple(newcost,i,j-1));
                    }
                }
            }
            
            return distance[n-1][n-1];
        }
};