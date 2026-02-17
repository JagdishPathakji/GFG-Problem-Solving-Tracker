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
    
    bool checkcondition2(Node *root) {
        
        if(!root)
        return true;
        
        if(root->left) {
            if(root->data < root->left->data)
            return false;
        }
        if(root->right) {
            if(root->data < root->right->data)
            return false;
        }
        
        return checkcondition2(root->left) && checkcondition2(root->right);
    }
    
    int countnodes(Node *root) {
        
        if(!root)
        return 0;
        
        return 1 + countnodes(root->left) + countnodes(root->right);
    }
    
    bool traverse(Node *root, int &nodes, int i) {
        
        if(!root)
        return true;
        
        if(i > nodes-1)
        return false;
        
        return traverse(root->left,nodes,2*i+1) &&  traverse(root->right,nodes,2*i+2);
    }
    
    bool checkcondition1(Node *root) {
        
        int nodes = countnodes(root);
        int i = 0;
        
        return traverse(root,nodes,i);
    }
    
    bool isHeap(Node* root) {
        
        // conditions for binary tree to be heap : 
        // 1. it must be complete binary tree (no right child if dont have left child)
        // 2. parent >= child data for every hierarchy
        return checkcondition1(root) && checkcondition2(root);
    }
};