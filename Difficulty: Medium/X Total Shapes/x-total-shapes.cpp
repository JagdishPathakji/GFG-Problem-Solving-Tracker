//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
  public:
    // Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) {
        // Code here
        queue<pair<int,int>> q;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j] == 'X') {
                    q.push({i,j});
                }
            }
        }
        
        int count = 0;
        queue<pair<int,int>> main;
        
        while(!q.empty()) {
            
            if(grid[q.front().first][q.front().second] == 'R') {
                q.pop();
                continue;
            }
            
            main.push(q.front());
            q.pop();
            
            while(!main.empty()) {
                
                auto node = main.front();
                main.pop();
                
                int i = node.first;
                int j = node.second;
                
                grid[i][j] = 'R';
                
                if(i-1 >=0 and grid[i-1][j] == 'X') {
                    main.push({i-1,j});
                    grid[i-1][j] = 'R';
                }
                if(j+1 < grid[i].size() and grid[i][j+1] == 'X') {
                    main.push({i,j+1});
                    grid[i][j+1] = 'R';
                }
                if(i+1 < grid.size() and grid[i+1][j] == 'X') {
                    main.push({i+1,j});
                    grid[i+1][j] = 'R';
                }
                if(j-1 >= 0 and grid[i][j-1] == 'X') {
                    main.push({i,j-1});
                    grid[i][j-1] = 'R';
                }
            }
            
            count++;
        }
        
        return count;
    
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends