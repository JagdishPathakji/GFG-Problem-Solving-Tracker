class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        
        queue<int> q1;
        queue<int> q2;
        
        int size = q.size();
        size = size/2;
        while(size--) {
            q1.push(q.front());
            q.pop();
        }
        
        while(!q.empty()) {
            q2.push(q.front());
            q.pop();
        }
        
        
        while(!q1.empty() && !q2.empty()) {

            q.push(q1.front());
            q1.pop();
            
            q.push(q2.front());
            q2.pop();
        }        
        
    }
};