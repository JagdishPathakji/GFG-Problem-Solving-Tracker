/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    
    Node* intersectPoint(Node* head1, Node* head2) {
        
        int count1 = 0;
        int count2 = 0;
        
        Node *curr1 = head1;
        Node *curr2 = head2;
        
        while(curr1) {
            count1++;
            curr1 = curr1->next;
        }
        
        while(curr2) {
            count2++;
            curr2 = curr2->next;
        }
        
        curr1 = head1;
        curr2 = head2;
        
        while(count1 < count2) {
            count2--;
            curr2 = curr2->next;
        }
        
        while(count1 > count2) {
            count1--;
            curr1 = curr1->next;
        }
        
        while(curr1 && curr2) {
            if(curr1 == curr2)
            return curr1;
            
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        
        return nullptr;
    }
};