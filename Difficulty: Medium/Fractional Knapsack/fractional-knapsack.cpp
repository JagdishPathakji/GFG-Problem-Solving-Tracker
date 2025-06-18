// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        
        priority_queue<pair<double,int>> pq;
        for(int i=0; i<wt.size(); i++) {
            pq.push({(double)val[i]/wt[i],wt[i]});
        }
        
        double ans = 0;
        while(!pq.empty() and capacity) {
             
             auto node = pq.top();
             pq.pop();
             
             double perkgwt = node.first;
             int w = node.second;
             
             if(w <= capacity) {
                 capacity -= w;
                 ans += (w * perkgwt);
             }
             else {
                 ans += (perkgwt * capacity);
                 capacity = 0;
             }
            
        }
        
        return round(ans * 1e6)/1e6;
    }
};
