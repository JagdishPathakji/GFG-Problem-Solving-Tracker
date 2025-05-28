class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        
        long long sum = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        
        for(int i=0; i<N; i++)
        pq.push(A[i]);
        
        int k1 = K1;
        int k2 = K2;
        while(!pq.empty() and k1--) {
            if(k1 < 0)
            break;
            
            pq.pop();
        }
        
        K2 -= K1;
        while(!pq.empty() and K2--) {
            if(K2 == 0)
            break;
            
            sum += pq.top();
            pq.pop();
        }
        
        return sum;
    }
};