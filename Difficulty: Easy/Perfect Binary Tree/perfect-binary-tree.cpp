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
  
    int find(Node *root) {
        
        if(!root)
        return 0;
        
        return 1 + max(find(root->left),find(root->right));
    }
  
    bool check(Node *root, int &level, int count) {
        
        if(!root)
        return true;
        
        if(!root->left && !root->right)
        return (count == level-1);
        
        if(root->left && !root->right)
        return false;
        
        if(root->right && !root->left)
        return false;
        
        return check(root->left,level,count+1) && check(root->right,level,count+1);
    }
  
    bool isPerfect(Node *root) {
        
        int level = find(root);
        return check(root,level,0);
    }
};