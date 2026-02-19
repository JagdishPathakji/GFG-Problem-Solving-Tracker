/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        
        queue<Node*> q;
        q.push(root);
        
        vector<vector<int>> ans;
        
        while(!q.empty()) {
            
            int size = q.size();
            vector<int> subarr;
            while(size--) {
                
                Node *temp = q.front();
                q.pop();
                
                subarr.push_back(temp->data);
                
                if(temp->left)
                q.push(temp->left);
                
                if(temp->right)
                q.push(temp->right);
            }
            
            ans.push_back(subarr);
        }
        
        return ans;
    }
};