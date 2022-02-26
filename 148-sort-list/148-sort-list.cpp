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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode *ptr = head;
        int count =0;
        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr= ptr->next;
        }
        sort(v.begin(), v.end());
        int n = v.size();
        if(n == 0) return NULL;
        ListNode* first = new ListNode;
        ListNode* temp;
        ListNode* last;
        first->val = v[0];
        first->next = NULL;
        last = first;
        
        for(int i=1; i<n; i++){
            temp = new ListNode;
            temp->val = v[i];
            temp->next = NULL;
            last->next = temp;
            last = temp;
        }
        
        return first;
    }
};