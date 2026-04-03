// User function Template for C++

/*
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
    
    vector<pair<int,int>> parents;
    
    int gcd(int a, int b) {
        
        if(a == 0)
        return b;
        
        if(b == 0)
        return a;
        
        if(a < b)
        return gcd(b%a,a);
        
        if(a > b) 
        return gcd(a%b,b);
    }
    
    void find(Node *root) {
        
        if(!root)
        return;
        
        if(root->left && root->right) {
            parents.push_back(make_pair(gcd(root->left->data,root->right->data),root->data));
        }
        
        find(root->left);
        find(root->right);
    }
  
    int maxGCD(Node* root) {
            
        find(root);
        sort(parents.begin(),parents.end());
        
        if(parents.size()==0)
        return 0;
        
        return parents[parents.size()-1].second;
    }
};
