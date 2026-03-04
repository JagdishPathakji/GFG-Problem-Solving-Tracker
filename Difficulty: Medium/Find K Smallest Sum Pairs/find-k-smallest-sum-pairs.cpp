class Solution {
  public:
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {

        set<pair<int,int>> s;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        
        pq.push({arr1[0]+arr2[0],{0,0}});
        s.insert({0,0});
        
        vector<vector<int>> ans;
        while(!pq.empty() && k--) {
            
            auto peek = pq.top();
            int num = peek.first;
            int r = peek.second.first;
            int c = peek.second.second;
            
            ans.push_back({arr1[r],arr2[c]});
            pq.pop();
            
            if(s.find({r+1,c}) == s.end()) {
                if(r+1 < arr1.size()) {
                    s.insert({r+1,c});
                    pq.push({arr1[r+1]+arr2[c],{r+1,c}});
                }   
            }
            
            if(s.find({r,c+1}) == s.end()) {
                if(c+1 < arr2.size()) {
                    s.insert({r,c+1});
                    pq.push({arr1[r]+arr2[c+1],{r,c+1}});
                }
            }
            
        }
        
        return ans;
    }
};
