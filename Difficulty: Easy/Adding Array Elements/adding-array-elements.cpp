class Solution {
  public:
    int minOperations(int arr[], int n, int k) {
        
        int cnt = 0;
        priority_queue<int, vector<int>, greater<int>> pq(arr,arr+n);
        
        while(pq.size() > 1 && pq.top() < k) {
            
            int one = pq.top();
            pq.pop();
            
            int two = pq.top();
            pq.pop();
            
            pq.push(one+two);
            cnt++;
        }
        
        if(pq.size() == 1 && pq.top() < k)
        return -1;
        
        return cnt;
    }
};