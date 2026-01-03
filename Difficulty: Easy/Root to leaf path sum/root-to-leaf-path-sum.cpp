/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
  
    void checksum(Node *root, int sum, bool &ans, int &target) {
        
        if(!root)
        return;
        
        if(ans)
        return;
        
        sum += root->data;
        
        if(!root->left && !root->right && sum == target) {
            ans = true;
            return;
        }
        
        checksum(root->left,sum,ans,target);
        checksum(root->right,sum,ans,target);
        
        sum -= root->data;
    }

    bool hasPathSum(Node *root, int target) {
    
        bool ans = false;
        checksum(root,0,ans,target);
        
        return ans;
    }
};