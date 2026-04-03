/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // function should print the nodes at k distance from root
    void find(Node *root, int k, vector<int> &ans, int count) {
        
        if(!root)
        return;
        
        if(k == count) {
            ans.push_back(root->data);
        }
        
        find(root->left,k,ans,count+1);
        find(root->right,k,ans,count+1);
    }
    
    vector<int> Kdistance(Node *root, int k) {
        
        vector<int> ans;
        int count = 0;
        find(root,k,ans,count);
        return ans;
    }
};