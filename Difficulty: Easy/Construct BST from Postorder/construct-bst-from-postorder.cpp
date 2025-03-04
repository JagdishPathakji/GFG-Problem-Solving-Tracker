//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");

cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/


Node* makeBST(int *post, int size, int MIN, int MAX, int &index) {
    
    if(index < 0) return nullptr;
    
    if(post[index] > MAX or post[index] < MIN) return nullptr;
    
    Node *root = new Node(post[index]);
    
    index--;
    
    root->right = makeBST(post,size,root->data,MAX,index);
    root->left = makeBST(post,size,MIN,root->data,index);
    
    return root;
}

Node *constructTree (int post[], int size) {
    
    int index = size-1;
    Node *root = makeBST(post,size,INT_MIN,INT_MAX,index);    
    
    return root;
}