/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        
        unordered_map<Node*,bool> mp;
        
        Node *curr = head;
        while(curr) {
            
            if(mp.find(curr) != mp.end()) {
                return curr->data;
            }
            
            mp[curr] = true;
            curr = curr->next;
        }
        
        return -1;
    }
};