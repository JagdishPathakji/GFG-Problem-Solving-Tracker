class Solution {
  public:
    
    
    int row[8] = {2,2,-2,-2,-1,1,-1,1};
    int col[8] = {1,-1,1,-1,2,2,-2,-2};
        
    bool valid(int r, int c, int n) {
        return (r >= 0 and c >= 0 and r < n and c < n);
    }
    
    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
        // Code here
        vector<vector<bool>> visited(N, vector<bool>(N,false));
        pair<int,int> src = make_pair(KnightPos[0]-1,KnightPos[1]-1);
        pair<int,int> dst = make_pair(TargetPos[0]-1,TargetPos[1]-1);
        
        if(src == dst) return 0;
            
        visited[src.first][src.second] = true;
        queue<pair<int,int>> q;
        q.push({src.first,src.second});
        
        int count = 0;
        while(!q.empty()) {
            
            count++;
            int k = q.size();
            while(k--) {
                
                auto node = q.front();
                q.pop();
                
                int i = node.first;
                int j = node.second;
                
                visited[i][j] = true;
                
                for(int k=0; k<8; k++) {
                    int new_row = i + row[k];
                    int new_col = j + col[k];
                    
                    if(new_row == dst.first and new_col == dst.second)
                    return count;
                    
                    if(valid(new_row,new_col,N) and !visited[new_row][new_col]) {
                        visited[new_row][new_col] = 1;
                        q.push({new_row,new_col});
                    }
                }
                
            }
        }
        
        return -1;
    }
};