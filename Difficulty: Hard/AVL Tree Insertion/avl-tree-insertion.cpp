//{ Driver Code Starts
//

#include <bits/stdc++.h>
#define MAXN 2000
using namespace std;

struct Node
{
    int data, height;
    Node *left, *right;
    
    Node(int x)
    {
        data=x;
        left=right=NULL;
        height=1;
    }
};

bool isBST(Node *n, int lower, int upper)
{
	if(!n) return 1;
	if( n->data <= lower || n->data >= upper ) return 0;
	return isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper) ;
}

pair<int,bool> isBalanced(Node* n)
{
	if(!n) return pair<int,bool> (0,1);

	pair<int,bool> l = isBalanced(n->left);
	pair<int,bool> r = isBalanced(n->right);

	if( abs(l.first - r.first) > 1 ) return pair<int,bool> (0,0);

	return pair<int,bool> ( 1 + max(l.first , r.first) , l.second && r.second );
}

bool isBalancedBST(Node* root)
{
	if( !isBST(root, INT_MIN, INT_MAX) )
		cout<< "BST voilated, inorder traversal : ";

	else if ( ! isBalanced(root).second )
		cout<< "Unbalanced BST, inorder traversal : ";

	else return 1;
	return 0;
}

void printInorder(Node* n)
{
	if(!n) return;
	printInorder(n->left);
	cout<< n->data << " ";
	printInorder(n->right);
}


// } Driver Code Ends

/* The structure of the Node is
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

class Solution{
  public:
  
    int getheight(Node *root) {

        if(!root) return 0;
    
        return root->height;
    }
    
    int getbalance(Node *root) {
    
        return getheight(root->left)-getheight(root->right);
    }
    
    Node* rightrotation(Node *root) {
    
        Node *child = root->left;
        Node *childright = child->right;
        child->right = root;
        root->left = childright;
        
        // update the height of root and child
        root->height = 1 + max(getheight(root->left),getheight(root->right));
        child->height = 1 + max(getheight(child->left),getheight(child->right));
        return child;    
    }
    
    Node* leftrotation(Node *root) {
    
        Node *child = root->right;
        Node *childleft = child->left;
        child->left = root;
        root->right = childleft;
    
        // update the height of root and child
        root->height = 1 + max(getheight(root->left),getheight(root->right));
        child->height = 1 + max(getheight(child->left),getheight(child->right));
    
        return child;
    }

    /*You are required to complete this method */
    Node* insertToAVL(Node* root, int key) 
    {
        
        // If no node exists in tree
        if(!root) return new Node(key);
    
        // If node exists in tree
        if(key < root->data)
            root->left = insertToAVL(root->left,key);
        else if(key > root->data) 
            root->right = insertToAVL(root->right,key);
        else 
        return root; // Duplicate elements are not allowed
        
        // Update height
        
        root->height = 1 + max(getheight(root->left),getheight(root->right));
    
        // Check Balancing
    
        int balance = getbalance(root);
    
        // left unbalance (LL/LR)
        if(balance > 1) {
    
            // LL if root->left->data > key 
            // Right rotation of top element
            if(root->left->data > key) {
                return rightrotation(root);
            }
            // LR if root->left->data < key 
            // left rotation of middle element and right rotation of top element
            else if(root->left->data < key) {
                root->left = leftrotation(root->left);
                return rightrotation(root);
            }
    
        }
        // right unbalance (RR/RL)
        else if(balance < -1) {
    
            // RR if root->right->data < key
            // Left rotation of top element
            if(root->right->data < key) {
                return leftrotation(root);
            }
            // RL if root->right->data > key
            // right rotation of middle element and left rotation of top element
            else if(root->right->data > key) {
                root->right = rightrotation(root->right);
                return leftrotation(root);
            }
        }
        // No unbalancing
        else {
            return root;
        }

    }
};


//{ Driver Code Starts.

int main()
{
	int ip[MAXN];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>> ip[i];
        
        Node* root = NULL;
        Solution obj;
        for(int i=0; i<n; i++)
        {
            root = obj.insertToAVL( root, ip[i] );
            
            if ( ! isBalancedBST(root) )
                break;
        }
        
        printInorder(root);
        cout<< endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends