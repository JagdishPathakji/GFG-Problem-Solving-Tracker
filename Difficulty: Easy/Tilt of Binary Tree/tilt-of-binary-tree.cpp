/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    int find(Node *root, int &ans) {
        
        if(!root)
        return 0;
        
        int left = find(root->left,ans);
        int right = find(root->right,ans);
        
        ans += abs(left-right);
        return left + right + root->data;
    }
    
    int tiltTree(Node *root) {
        
        if(!root)
        return 0;
        
        int ans = 0;    
        find(root,ans);
        
        return ans;
    }
};