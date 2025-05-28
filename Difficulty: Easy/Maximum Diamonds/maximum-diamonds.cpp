class Solution {
  public:
    long long maxDiamonds(vector<int>& arr, int k) {
        
        priority_queue<int> pq(arr.begin(),arr.end());
        
        long long sum = 0;
        while(!pq.empty() and k--) {
            sum += pq.top();
            int e = pq.top();
            pq.pop();
            pq.push(e/2);
        }
        
        return sum;
    }
};