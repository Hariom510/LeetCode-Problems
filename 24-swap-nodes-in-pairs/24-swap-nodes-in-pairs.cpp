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
    ListNode* swapPairs(ListNode* head) {
//         if(!head || !head->next) return head;
        
//         ListNode* dummy = new  ListNode();
//         ListNode* prev = dummy;
//         ListNode* curr= head;
//         // danger logic.
//         while(curr && curr->next){
//             prev->next = curr->next;
//             curr->next = prev->next->next;
//             prev->next->next = curr;
            
//             prev = curr;
//             curr = curr->next;
//         }
        
//         return dummy->next;
        
        
        //method 2
        //swap the first two then recurse the rest
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* temp = head->next;
        head->next = swapPairs(temp->next);
        temp->next = head;
        
        return temp;
    }
};