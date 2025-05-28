// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    
    void find(Node *root, int &n) {
        
        if(!root) return;
        
        n++;
        
        find(root->left,n);
        find(root->right,n);
    }
    
    void CheckParentChild(Node *root, bool &relation) {
        
        if(!root) return;
        if(!relation) return;
        
        if(root->left and root->left->data > root->data) {
            relation = false;
            return;
        }
        if(root->right and root->right->data > root->data) {
            relation = false;
            return;
        }
        
        CheckParentChild(root->left,relation);
        CheckParentChild(root->right,relation);
    }
    
    bool checkcomplete(Node *root, int index, int n) {
        
        if(!root) return true;
        
        if(index >= n) return false;
        
        return checkcomplete(root->left,index*2+1,n) and checkcomplete(root->right,index*2+2,n);
    }
    
    bool isHeap(Node* root) {
        
        int n = 0;
        find(root,n);
    
        bool relation = true;
        CheckParentChild(root,relation);

        return checkcomplete(root,0,n) and relation;
    }
    
    
};