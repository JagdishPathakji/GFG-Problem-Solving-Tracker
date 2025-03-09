//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data, height;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		height = 1;
		left = right = NULL;
	}
};

int setHeights(Node* n)
{
	if(!n) return 0;
	n->height = 1 + max( setHeights(n->left) , setHeights(n->right) );
	return n->height;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    setHeights(root);
    return root;
}

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

struct Node* deleteNode(struct Node* root, int data);

int main()
{
	int t;
	cin>>t;
	getchar();

	while(t--)
	{
		string s;
		getline(cin,s);
		Node* root = buildTree(s);
        
		int n;
		cin>> n;
		int ip[n];
		for(int i=0; i<n; i++)
			cin>> ip[i];
        
		for(int i=0; i<n; i++)
		{
			root = deleteNode(root, ip[i]);
			
			if( !isBalancedBST(root) )
				break;
		}
        
		if(root==NULL)
			cout<<"null";
		else
			printInorder(root);
		cout<< endl;
        
		getline(cin,s); // to deal with newline char
	
cout << "~" << "\n";
}
	return 1;
}

// } Driver Code Ends


/* Node is as follows:

struct Node
{
	int data, height;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		height = 1;
		left = right = NULL;
	}
};

*/
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

Node *removenode(Node *root, int data) {
    
    if(!root) return nullptr;
    
    if(root->data > data) {
        root->left = removenode(root->left,data);
    }
    else if(root->data < data) {
        root->right = removenode(root->right,data);
    }
    else {
        
        // The node to be deleted is leaf node
        if(!root->left and !root->right) {
            delete root;
            return nullptr;
        }
        // The node to be deleted has one child
        // only left child exists
        else if(root->left and !root->right) {
                Node *temp = root->left;
                delete root;
                return temp;
        }
        // only right exists child exists
        else if(root->right and !root->left) {
                Node *temp = root->right;
                delete root;
                return temp;
        }
        // The node to be deleted has two child
        else if(root->left and root->right) {
            
            Node *child = root->left;
            while(child->right) {
                child = child->right;
            }
            
            root->data = child->data;
            root->left = removenode(root->left,child->data);
        }

    }
    
    // update the height
    root->height = 1 + max(getheight(root->left),getheight(root->right));
    
    // Check Balancing
    int balance = getbalance(root);
    
    // left unbalance (LL/LR)
    if(balance > 1) {
    
        // LL if root->left->data > key 
        // Right rotation of top element
        if(getbalance(root->left) >= 0) {
            return rightrotation(root);
        }
        // LR if root->left->data < key 
        // left rotation of middle element and right rotation of top element
        else {
            root->left = leftrotation(root->left);
            return rightrotation(root);
        }
    
    }
    // right unbalance (RR/RL)
    else if(balance < -1) {
    
        // RR if root->right->data < key
        // Left rotation of top element
        if(getbalance(root->right) <=  0) {
            return leftrotation(root);
        }
        // RL if root->right->data > key
        // right rotation of middle element and left rotation of top element
        else if(root->right->data > data) {
            root->right = rightrotation(root->right);
            return leftrotation(root);
        }
    }
    // No unbalancing
    else {
        return root;
    }
    
}

Node* deleteNode(Node* root, int data) {

    root = removenode(root,data);

    return root;

}