/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       //please remember this method. this is awesome
        ListNode * a = headA;
        ListNode * b = headB;
        
        while(a!=b){
            a= (a==NULL?headB: a->next);
            b= (b==NULL?headA : b->next);
        }
        return b;  //we can return either a or b.
        
    }
};