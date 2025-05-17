//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
        
    vector<vector<char>> fill(vector<vector<char>>& grid) {
        
        int r = grid.size();
        int c = grid[0].size();
        
        // Here, we cannot covert that O's which are at boundary to X's.
        // Thus we will do boundary traversal, find out O's and then apply bfs from that 
        // and convert it to T.
        // Now after that whichever O's are remaining can be converted to X's so do that
        // and convert the T's to O's and return the answer.
        
        // simply push all those elements for which bfs is required into the queue.
        
        queue<pair<int,int>> q;
        // first row
        for(int i=0; i<c; i++) {
            if(grid[0][i] == 'O')
            q.push({0,i});
        }
        // first col
        for(int i=0; i<r; i++) {
            if(grid[i][0] == 'O')
            q.push({i,0});
        }
        // last row
        for(int i=0; i<c; i++) {
            if(grid[r-1][i] == 'O')
            q.push({r-1,i});
        }
        // last col
        for(int i=0; i<r; i++) {
            if(grid[i][c-1] == 'O')
            q.push({i,c-1});
        }
        
        while(!q.empty()) {
            
            auto node = q.front();
            q.pop();
            
            int i = node.first;
            int j = node.second;
            
            grid[i][j] = 'T';
            
            if(i+1 < grid.size() and grid[i+1][j] == 'O') {
                q.push({i+1,j});
                grid[i+1][j] = 'T';
            }
            if(j+1 < grid[i].size() and grid[i][j+1] == 'O') {
                q.push({i,j+1});
                grid[i][j+1] = 'T';
            }
            if(i-1 >= 0 and grid[i-1][j] == 'O') {
                q.push({i-1,j});
                grid[i-1][j] = 'T';
            }
            if(j-1 >= 0 and grid[i][j-1] == 'O') {
                q.push({i,j-1});
                grid[i][j-1] = 'T';
            }
        }
        
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j] == 'O')
                grid[i][j] = 'X';
                if(grid[i][j] == 'T')
                grid[i][j] = 'O';
            }
        }
        
        return grid;
    }   
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        Solution ob;
        vector<vector<char>> ans = ob.fill(mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends