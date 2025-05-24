class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // code here
        vector<bool> isMST(V,false);
        vector<int> parent(V,-1);
        int cost = 0;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,-1}});
        
        while(!pq.empty()) {
            
            auto top = pq.top();
            pq.pop();
            
            int wt = top.first;
            int node = top.second.first;
            int prt = top.second.second;
            
            if(isMST[node])
            continue;
            
            isMST[node] = 1;
            cost = cost + wt;
            parent[node] = prt;
            
            for(int i=0; i<adj[node].size(); i++) {
                if(!isMST[adj[node][i][0]]) {
                    pq.push({adj[node][i][1],{adj[node][i][0],node}});
                }
            }
        }
        
        return cost;
    }
};