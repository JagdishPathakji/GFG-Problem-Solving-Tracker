/*Structure of the node of the binary tree

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// Return the height of the given special binary tree


int findTreeHeight(Node* root) {
    
    if(!root)
    return -1;
    
    if(root->left && root->left->right == root && root->right && root->right->left == root)
    return 0;
    
    int left = findTreeHeight(root->left);
    int right = findTreeHeight(root->right);
    
    return 1 + max(left,right);
    
}