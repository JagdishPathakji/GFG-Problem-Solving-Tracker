// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &distance) {
        // Code here
        
        
        int n = distance.size();
        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(distance[i][k] == 1e8 || distance[k][j] == 1e8)
                    continue;
                    distance[i][j] = min(distance[i][j],distance[i][k] + distance[k][j]);
                }
            }
        }

    }
};