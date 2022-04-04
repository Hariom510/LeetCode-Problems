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

//please remember it.
 class Solution {
public:
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *ptr = head, *a = head, *b = head;
        for(int i=1; i<k; i++){
            ptr = ptr->next;
        }
        a = ptr;
        
        while(ptr->next){
            b = b->next;
            ptr = ptr->next;
        }
        swap(a->val , b->val);
        return head;
            
        
    }
};