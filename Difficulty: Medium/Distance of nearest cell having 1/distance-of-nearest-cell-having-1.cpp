//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& mat) {
        // Code here
        queue<pair<int,int>> q;
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[i].size(); j++) {
                if(mat[i][j] == 1) {
                    q.push({i,j});
                    mat[i][j] = 0;
                }
                else
                mat[i][j] = INT_MAX;
            }
        }

        while(!q.empty()) {

            auto node = q.front();
            q.pop();

            int i = node.first;
            int j = node.second;

            if(i-1 >= 0 and mat[i-1][j] != 1) {
                if(mat[i-1][j] > mat[i][j] + abs(i-(i-1)) + abs(j-j)) {
                    mat[i-1][j] = mat[i][j] + abs(i-(i-1)) + abs(j-j);
                    q.push({i-1,j});
                }
            }
            if(i+1 < mat.size() and mat[i+1][j] != 1) {
                if(mat[i+1][j] > mat[i][j] + abs(i-(i+1)) + abs(j-j)) {
                    mat[i+1][j] = mat[i][j] + abs(i-(i+1)) + abs(j-j);
                    q.push({i+1,j});
                }
            }
            if(j-1 >= 0 and mat[i][j-1] != 1) {
                if(mat[i][j-1] > mat[i][j] + abs(i-i) + abs(j-(j-1))) {
                    mat[i][j-1] = mat[i][j] + abs(i-i) + abs(j-(j-1));
                    q.push({i,j-1});
                }
            }
            if(j+1 < mat[i].size() and mat[i][j+1] != 1) {
                if(mat[i][j+1] > mat[i][j] + abs(i-i) + abs(j-(j+1))) {
                    mat[i][j+1] = mat[i][j] + abs(i-i) + abs(j-(j+1));
                    q.push({i,j+1});
                }
            }
        }

        return mat;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << "\n";
        }
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends