/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        
        Node *head = nullptr;
        
        Node *curr1 = head1;
        Node *curr2 = head2;
        Node *curr = head;
    
        while(curr1 && curr2) {
            
            if(curr1->data == curr2->data) {
                if(head) {
                    Node *temp = new Node(curr1->data);
                    curr->next = temp;
                    curr = curr->next;
                }
                else {
                    head = new Node(curr1->data);
                    curr = head;
                }
                
                curr1 = curr1->next;
                curr2 = curr2->next;
            }
            else if(curr1->data < curr2->data) {
                curr1 = curr1->next;
            }
            else if(curr1->data > curr2->data) {
                curr2 = curr2->next;
            }
        }
        
        return head;
    }
};