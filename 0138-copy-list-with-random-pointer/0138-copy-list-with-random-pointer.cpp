/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     map<Node*, Node*> m; //key for holding address, value for new node
     Node* ptr = head;
     while(ptr!=NULL){
         m[ptr] = new Node(ptr->val);
         ptr = ptr->next;
     }
     
    ptr = head;
    while(ptr!=NULL){
        m[ptr]->next = m[ptr->next];
        m[ptr]->random = m[ptr->random];
        ptr= ptr->next;
    }
        return m[head];
        
        
    //we don't have to output the result.   
    }
};