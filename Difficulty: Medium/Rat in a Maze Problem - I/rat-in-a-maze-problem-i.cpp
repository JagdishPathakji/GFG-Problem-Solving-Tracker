class Solution {
  public:
    
    void rat(int i, int j, vector<vector<int>> &maze, string &temp, vector<vector<bool>> &visited, vector<string> &path) {
        
        if(i == maze.size()-1 and j == maze.size()-1) {
            path.push_back(temp);
            return;
        }
        
        visited[i][j] = true;
        
        if(i-1 >= 0 and visited[i-1][j] == 0 and maze[i-1][j] == 1) {
            temp.push_back('U');
            rat(i-1,j,maze,temp,visited,path);
            temp.pop_back();
        }
        if(i+1 < maze.size() and visited[i+1][j] == 0 and maze[i+1][j] == 1) {
            temp.push_back('D');
            rat(i+1,j,maze,temp,visited,path);   
            temp.pop_back();
        }
        if(j-1 >= 0 and visited[i][j-1] == 0 and maze[i][j-1] == 1) {
            temp.push_back('L');
            rat(i,j-1,maze,temp,visited,path);   
            temp.pop_back();
        }
        if(j+1 < maze[i].size() and visited[i][j+1] == 0 and maze[i][j+1] == 1) {
            temp.push_back('R');
            rat(i,j+1,maze,temp,visited,path);   
            temp.pop_back();
        }
        
        visited[i][j] = false;
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        string temp = "";
        vector<string> path;
        int n = maze.size();
        
        if(maze[0][0] == 0 || maze[n-1][n-1] == 0)
        return {};
        
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        
        rat(0,0,maze,temp,visited,path);
        sort(path.begin(),path.end());
        return path;
    }
};