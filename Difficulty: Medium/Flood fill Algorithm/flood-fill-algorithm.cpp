//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        int color = image[sr][sc];
        
        if(color == newColor) return image;
        
        queue<pair<int,int>> q;
        q.push({sr,sc});
        
        while(!q.empty()) {
            
            auto node = q.front();
            q.pop();
            
            int i = node.first;
            int j = node.second;
            
            image[i][j] = newColor;
            if(i+1 < image.size() and image[i+1][j] == color) {
                q.push({i+1,j});
                image[i+1][j] = newColor;
            }
            if(i-1 >= 0 and image[i-1][j] == color) {
                q.push({i-1,j});
                image[i-1][j] = newColor;
            }
            if(j-1 >= 0 and image[i][j-1] == color) {
                q.push({i,j-1});
                image[i][j-1] = newColor;
            }
            if(j+1 < image[i].size() and image[i][j+1] == color) {
                q.push({i,j+1});
                image[i][j+1] = newColor;
            }
            
        }
        
        return image;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for (auto i : ans) {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends