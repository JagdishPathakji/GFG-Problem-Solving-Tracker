// User function Template for C++

/*struct Node {
    int data;
    Node *left, *right;
};*/

class Solution {
  public:
    
    void findinorder(Node *root, vector<int> &inorder) {
        
        if(!root) return;
        
        findinorder(root->left,inorder);
        inorder.push_back(root->data);
        findinorder(root->right,inorder);
        
    }
  
    void makeHeap(Node *root, vector<int> &inorder, int &index) {
        
        if(!root) return;
        
        root->data = inorder[index];
        
        index--;
        makeHeap(root->right,inorder,index);
        makeHeap(root->left,inorder,index);
    }
  
    void convertToMaxHeapUtil(Node* root) {
        vector<int> inorder;
        findinorder(root,inorder);
        
        int index = inorder.size()-1;
        makeHeap(root,inorder,index);        
    }
};
