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
    void reorderList(ListNode* head) {
       //awesome question. 
        int cnt=0;
        ListNode* ptr = head;
        stack<ListNode*> s;
        while(ptr!=NULL){
            cnt++;
            s.push(ptr);
            ptr = ptr->next;
        }
        ptr = head;
        for(int i=0; i<cnt/2; i++){
            ListNode* temp = s.top();
            s.pop();
            temp->next = ptr->next;
            ptr->next = temp;
            ptr = ptr->next->next;
            
        }
        ptr->next = NULL;
    }
};