class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        
        int targetIndex = s.size()-floor((s.size()+1)/2)+1;
        
        vector<int> temp;
        while(!s.empty() && targetIndex--) {
            temp.push_back(s.top());
            s.pop();
        }
        
        for(int i=temp.size()-2; i>=0; i--) {
            s.push(temp[i]);
        }
    }
};