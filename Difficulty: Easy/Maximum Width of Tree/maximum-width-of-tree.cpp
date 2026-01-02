/*  Structure of a Binary Tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    int maxWidth(Node* root) {
        
        queue<Node*> q;
        q.push(root);
        
        int ans = INT_MIN;
        while(!q.empty()) {
            
            int size = q.size();
            ans = max(ans,size);
            
            while(size--) {
                
                Node *temp = q.front();
                q.pop();
                
                if(temp->left)
                q.push(temp->left);
                
                if(temp->right)
                q.push(temp->right);
            }
        }
        
        return ans;
    }
};