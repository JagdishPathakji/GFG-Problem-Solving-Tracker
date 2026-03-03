class Solution {
  public:
    int minOperations(vector<int>& arr) {
        
        double sum = 0;
        for(int i=0; i<arr.size(); i++) 
        sum += arr[i];
        
        double halfsum = sum/2;
        priority_queue<double> pq(arr.begin(),arr.end());
        
        int cnt = 0;
        double max;
        while(sum > halfsum && !pq.empty()) {
            
            max = pq.top();
            pq.pop();
            sum -= max/2;
            pq.push(max/2);
            cnt++;
        }
        
        return cnt;
    }
};