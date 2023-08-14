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
    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
         while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // cout<< "slow is " << slow->val;
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* p = head;
        ListNode* q, *r;
        q = NULL, r=NULL;
        
        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
           
        }
         // cout<< "q is " << q->val;
        return q;
    }
    
    
    int pairSum(ListNode* head) {
       
        ListNode* middle = middleNode(head);
        
        middle->next = reverse(middle->next);
        
        
        ListNode* p, *q;
        p = head;
        q= middle->next;
        int maxi = 0;
        while(q!=NULL){
            maxi = max(maxi, p->val+q->val);
            p=p->next;
            q=q->next;
        }
        return maxi;  
    }
};