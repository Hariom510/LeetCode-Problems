/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        //by using vector
        
//         ListNode* ptr = head;
//         vector<int> v;
        
//         while(ptr != NULL){
//             v.push_back(ptr->val);
//             ptr = ptr->next;
//         }
        
//         int ln = v.size();
        
//         int k = (ln-n);
//         vector<int>::iterator it;
 
//         it = v.begin()+k;
//         v.erase(it);
//         if(v.size() == 0) return NULL;
//         ListNode* first = new ListNode;
//         ListNode* temp;
//         ListNode* last;
        
//         first->val = v[0];
//         first->next = NULL;
//         last = first;
        
        
//         for(int i=1; i<ln-1; i++){
//             temp = new ListNode;
    
//             temp->val = v[i];
//             temp->next = NULL;
//             last->next = temp;
//             last = temp;
//         }
//          return first; 
        
        
        // best approach
        ListNode *dummy = new ListNode();
        ListNode *fast = dummy;
        ListNode *slow = dummy;
        dummy->next = head;
        while(n--){
            fast = fast->next;
        }
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return dummy->next;
        
        
    } 
};