// User function template for C++

class Solution {
  public:

    void DFS(int node,int parent,vector<int> adj[],vector<bool> &visited,vector<int> &discovery,vector<int> &low,stack<int> &st,vector<bool> &instack,vector<vector<int>> &ans,int &count) {
        
        visited[node] = true;
        discovery[node] = count;
        low[node] = count;
        st.push(node);
        instack[node] = true;
        
        for(int i=0; i<adj[node].size(); i++) {
            
            int neigh = adj[node][i];
            if(visited[neigh]) {
                // if it is present in stack or not.
                // if it is present then only update the low[node]
                if(instack[neigh])
                low[node] = min(low[node],discovery[neigh]);
            }
            else {
            
                count++;
                DFS(neigh,node,adj,visited,discovery,low,st,instack,ans,count);
            
                low[node] = min(low[node],low[neigh]);
                
            }
        }
        
        if(discovery[node] == low[node]) {
            vector<int> temp;
            while(!st.empty() and st.top() != node) {
                temp.push_back(st.top());
                instack[st.top()] = 0;
                st.pop();
                
            }
            temp.push_back(st.top());
            instack[st.top()] = 0;
            st.pop();
            
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
        }
    }

    vector<vector<int>> tarjans(int V, vector<int> adj[]) {
        
        vector<vector<int>> ans;
        vector<int> discovery(V);
        vector<int> low(V);
        vector<bool> visited(V,false);
        stack<int> st;
        vector<bool> instack(V,false);
        int count = 0;
        
        // Required loop to manage the disconnected graph case
        for(int i=0; i<V; i++) {
            if(!visited[i])
            DFS(i,-1,adj,visited,discovery,low,st,instack,ans,count); 
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};