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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr = head->next;
        
        ListNode* dummy = new ListNode(0);
        ListNode* newhead = dummy;
        int sum=0;
        while(ptr!=NULL){
            if(ptr->val ==0){
                dummy->next = new ListNode(sum);
                dummy = dummy->next;
                dummy->next = NULL;
                sum =0;
            }
            else sum += ptr->val;
            ptr = ptr->next;
        }
        
        return newhead->next;
        
    }
};