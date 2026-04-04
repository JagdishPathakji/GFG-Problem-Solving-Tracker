/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        
        int level = 1;
        queue<Node*> q;
        q.push(root);
        
        vector<int> ans;
        
        while(!q.empty()) {
            
            int size = q.size();
            vector<int> temp;
            while(size--) {
                
                auto node = q.front();
                q.pop();
                
                temp.push_back(node->data);
                
                if(node->left)
                q.push(node->left);
                    
                if(node->right)
                q.push(node->right);
            }
            
            level++;
            
            if(level % 2 != 0) {
                for(int i=temp.size()-1; i>=0; i--)
                ans.push_back(temp[i]);
            }
            else {
                for(int i=0; i<temp.size(); i++)
                ans.push_back(temp[i]);
            }
        }
        
        return ans;
    }
};