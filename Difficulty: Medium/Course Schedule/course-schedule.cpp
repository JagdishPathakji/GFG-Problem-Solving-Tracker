class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> prerequisites) {
        // code here
                
        vector<vector<int>> adjlist(n);
        for(int i=0; i<prerequisites.size(); i++) {
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];

            adjlist[v].push_back(u);
        }

        vector<int> indegree(n,0);
        for(int i=0; i<n; i++) {
            for(int j=0; j<adjlist[i].size(); j++) {
                indegree[adjlist[i][j]]++;
            }
        }

        queue<int> q;
        for(int i=0; i<indegree.size(); i++) {
            if(indegree[i]==0)
            q.push(i);
        }

        vector<int> ans;
        while(!q.empty()) {

            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(int i=0; i<adjlist[node].size(); i++) {
                indegree[adjlist[node][i]]--;
                if(indegree[adjlist[node][i]] == 0) {
                    q.push(adjlist[node][i]);
                }
            }
        }

        return ans;
    }
};