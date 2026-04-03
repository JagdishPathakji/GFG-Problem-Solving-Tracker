// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        
        queue<Node*> q;
        q.push(root);
        
        vector<int> ans;
        
        while(!q.empty()) {
            
            int size = q.size();
            int maxi = 0;
            while(size--) {
                
                auto node = q.front();
                maxi = max(maxi,node->data);
                q.pop();
                
                if(node->left)
                q.push(node->left);
                
                if(node->right)
                q.push(node->right);
            }
            
            ans.push_back(maxi);
        }
        
        return ans;
    }
};