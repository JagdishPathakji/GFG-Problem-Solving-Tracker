/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        
        unordered_map<Node*,bool> mp;
        
        Node *curr = head;
        Node *prev = nullptr;
        while(curr) {
            
            if(mp.find(curr) != mp.end()) {
                prev->next = nullptr;   
                return;
            }
            
            mp[curr] = true;
            prev = curr;
            curr = curr->next;
        }
    }
};