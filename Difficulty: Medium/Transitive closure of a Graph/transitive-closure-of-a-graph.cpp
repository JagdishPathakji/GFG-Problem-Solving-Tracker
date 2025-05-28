//Back-end complete function Template for C++

class Solution {
  public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph) {
        // code here
        // if there is marked 1 from i to k and k to j then also mark one in i to j -> question says
        
        // Ensure reflexive closure: every vertex is reachable from itself
        for (int i = 0; i < N; i++)
            graph[i][i] = 1;

        for(int k=0; k<N; k++) {
            for(int i=0; i<N; i++) {
                for(int j=0; j<N; j++) {
                    if(graph[i][k] and graph[k][j]) {
                        graph[i][j] = 1;
                    }
                }
            }
        }
        
        return graph;
    }
};