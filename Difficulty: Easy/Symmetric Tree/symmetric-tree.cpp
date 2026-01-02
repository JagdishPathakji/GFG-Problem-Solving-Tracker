/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    
    
    Node* invertTree(Node *inverted) {

        if(!inverted) return nullptr;
     
        Node *root = new Node(inverted->data);
        
        root->right = invertTree(inverted->left);
        
        root->left = invertTree(inverted->right);
        
        return root;
    }

    bool checkIdentical(Node *root1, Node *root2) {
        
        if(!root1 && !root2) return true;
        
        if(!root1 && root2) return false;
        if(root1 && !root2) return false;
        
        if(!root1->left && root2->left) return false;
        if(!root1->right && root2->right) return false;
        if(root1->left && !root2->left) return false;
        if(root1->right && !root2->right) return false;
        if(root1->data != root2->data) return false;
        
        return checkIdentical(root1->left,root2->left) && checkIdentical(root1->right,root2->right);
    }
  
    bool isSymmetric(Node* root) {
        
        Node *original = root;
        Node *inverted = root;
        inverted = invertTree(inverted);
        
        return checkIdentical(original,inverted);
    }
};