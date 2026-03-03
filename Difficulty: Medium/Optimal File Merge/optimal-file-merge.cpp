//User function Template for C++

class Solution {
public:
    // Function to find minimum computation
    int minComputation(vector<int> files)
    {
        
        int totalCost = 0;
        priority_queue<int, vector<int>, greater<int>> pq(files.begin(),files.end());
        
        while(!pq.empty() && pq.size() > 1) {
            
            int one = pq.top();
            pq.pop();
            
            int two = pq.top();
            pq.pop();
            
            totalCost += (one+two);
            pq.push(one+two);
        }
        
        return totalCost;
    }
};