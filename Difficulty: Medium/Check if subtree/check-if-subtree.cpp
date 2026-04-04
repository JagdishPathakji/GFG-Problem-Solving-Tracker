/* A binary tree node

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
    
    
        bool checksame(Node *root, Node *subroot) {

        if(!root && !subroot)
        return true;

        if(!root->left && subroot->left)
        return false;

        if(root->left && !subroot->left)
        return false;

        if(root->left && subroot->left && subroot->left->data != root->left->data)
        return false;

        if(!root->right && subroot->right)
        return false;

        if(root->right && !subroot->right)
        return false;

        if(root->right && subroot->right && subroot->right->data != root->right->data)
        return false;
        
        return checksame(root->left,subroot->left) && checksame(root->right,subroot->right);
    }

    void find(Node *root, int &data, vector<Node*> &v) {
        if(!root)
        return;

        if(root->data == data) {
            v.push_back(root);
        }

        find(root->left,data,v);
        find(root->right,data,v);
    }
    
    // Function to check if S is a subtree of tree T.
    bool isSubTree(Node* root, Node* subroot) {
        // Your code here
        vector<Node*> v;
        find(root,subroot->data,v);

        for(int i=0; i<v.size(); i++) {
            if(checksame(v[i],subroot))
            return true;
        }

        return false;
    }
};