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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *first = list1;
        ListNode *second = list2;
        ListNode *third;
        ListNode *last;
        
        if(first == NULL && second == NULL)
            return first;
        else if(first == NULL && second != NULL)
            return second;
        else if(first != NULL && second == NULL)
            return first;
        
        if(first->val <= second->val){
            third = last = first;
            first = first->next;
            last->next = NULL;
        }
        else{
            third = last = second;
            second = second->next;
            last->next = NULL;
        }
        
        while(first != NULL && second != NULL){
            if(first->val <= second->val){
                last->next = first;
                last = first;
                first = first->next;
                last->next = NULL;
            }
            else{
                last->next = second;
                last = second;
                second = second->next;
                last->next = NULL;
            }
        }
        if(first != NULL){
            last->next = first;
        }
        else{
            last->next = second;
        }
        return third;
    }
};