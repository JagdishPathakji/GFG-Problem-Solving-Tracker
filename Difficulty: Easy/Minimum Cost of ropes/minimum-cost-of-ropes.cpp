class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(),arr.end());
        int cost = 0;
        
        while(pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            
            cost += first + second;
            pq.push(first+second);
        }
        
        return cost;
    }   
};