/*
class Node {
   public:
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
    
    bool isHeap(Node* root) {
        
        if(!root)
        return true;
        
        if(!root->left && !root->right)
        return true;
        
        if(!root->left && root->right)
        return false;
        
        if(root->left && root->left->left) {
            if(!root->left->right && root->right && root->right->left) {
                return false;
            }
            if(!root->left->right && root->right && root->right->right) {
                return false;
            }
        }
        
        
        if(root->left) {
            if(root->data < root->left->data)
            return false;
        }
        
        if(root->right) {
            if(root->data < root->right->data)
            return false;
        }
        
        return isHeap(root->left) && isHeap(root->right);
    }
};