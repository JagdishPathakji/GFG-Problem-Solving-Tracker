//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        // Code here
        vector<int> adjlist[N];
        for(int i=0; i<prerequisites.size(); i++) {
            
            int u = prerequisites[i].first;
            int v = prerequisites[i].second;
            
            adjlist[u].push_back(v);
        }
        
        vector<int> indegree(N,0);
        for(int i=0; i<N; i++) {
            for(int j=0; j<adjlist[i].size(); j++) {
                indegree[adjlist[i][j]]++;
            }
        }
        
        queue<int> q;
        for(int i=0; i<indegree.size(); i++) {
            if(indegree[i] == 0)
            q.push(i);
        }
        
        int count = 0;
        while(!q.empty()) {
            
            int node = q.front();
            q.pop();
            
            count++;
            for(int i=0; i<adjlist[node].size(); i++) {
                indegree[adjlist[node][i]]--;
                if(indegree[adjlist[node][i]] == 0) {
                    q.push(adjlist[node][i]);   
                }
            }
        }
        
        return count == N;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends