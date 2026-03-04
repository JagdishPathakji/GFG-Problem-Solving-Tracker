class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {

        set<pair<int,int>> s;
        priority_queue<pair<int,pair<int,int>>> pq;
        
        // reverse sorting
        sort(a.begin(),a.end(), greater<int>());
        sort(b.begin(),b.end(), greater<int>());
        
        pq.push({a[0]+b[0],{0,0}});
        s.insert({0,0});
        
        vector<int> ans;
        while(k-- && !pq.empty()) {
            
            auto peek = pq.top();
            pq.pop();
            
            int num = peek.first;
            int r = peek.second.first;
            int c = peek.second.second;
            
            ans.push_back(num);
            
            if(r+1 < a.size()) {
                if(s.find({r+1,c}) == s.end()) {
                    pq.push({a[r+1]+b[c],{r+1,c}});
                    s.insert({r+1,c});
                }
            }
            
            if(c+1 < b.size()) {
                if(s.find({r,c+1}) == s.end()) {
                    pq.push({a[r]+b[c+1],{r,c+1}});
                    s.insert({r,c+1});
                }
            }
        }
        
        return ans;
    }
};