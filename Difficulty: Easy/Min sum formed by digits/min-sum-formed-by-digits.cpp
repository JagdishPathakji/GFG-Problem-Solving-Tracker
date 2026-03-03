class Solution {
  public:
    long long int minSum(int arr[], int n) {
    
        long long int one = 0;
        long long int two = 0;
        
        priority_queue<int, vector<int>, greater<int>> pq(arr,arr+n);
        
        bool turn = false;
        while(!pq.empty()) {
            
            if(turn) {
                one = one * 10 + pq.top();
            }
            else {
                two = two * 10 + pq.top();
            }
            
            pq.pop();
            turn = !turn;
        }
        
        
        return one + two;
    }
};