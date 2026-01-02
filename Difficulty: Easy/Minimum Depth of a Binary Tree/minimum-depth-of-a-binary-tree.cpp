/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    void findMinDepth(Node *root, int curr, int &ans) {
        
        if(!root)
        return;
        
        if(!root->left && !root->right) {
            ans = min(ans,curr);
        }
        
        findMinDepth(root->left,curr+1,ans);
        findMinDepth(root->right,curr+1,ans);
        
    }
  
    int minDepth(Node *root) {

        int ans = INT_MAX;
        findMinDepth(root,1,ans);
        return ans;
    }
};