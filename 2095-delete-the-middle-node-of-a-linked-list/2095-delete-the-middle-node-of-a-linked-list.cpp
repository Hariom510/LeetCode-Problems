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
    ListNode* deleteMiddle(ListNode* head) {
        vector<int> v;
        ListNode *ptr = head;
        while(ptr){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        int n = v.size();
        int l = n/2;
        for(int i=0; i<n; i++){
            if(i == l){
                v.erase(v.begin()+i);
            }
        }
        
       ListNode *temp;
       ListNode *last;
        ListNode *first = new ListNode;
        if(v.size() > 0){
        first->val= v[0];
        first->next = NULL;
        last =  first ;
        
            for(int i=1; i<n-1 ; i++){
                temp = new ListNode;
                temp->val = v[i];
                last->next = temp;
                last = temp;
            }
            return first;
        }
        else 
        return NULL;
        
        
    }
};