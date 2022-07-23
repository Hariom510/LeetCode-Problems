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
        ListNode* dummy = new ListNode(0);
        ListNode* res = dummy;
        ListNode* ptr = head->next;
        int sum =0;
        while(ptr!=NULL){
           if(ptr->val!=0){
               sum+= ptr->val;
           } 
            else{
                res->next = new ListNode(sum);
                res= res->next;
                sum=0;
            }
            ptr = ptr->next;
        }
        return dummy->next;
        
    }
};