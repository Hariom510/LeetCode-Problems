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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> v1;
        vector<int> v2;
        ListNode *ptr = head;
        int count =0;
        while(ptr!=NULL){
            ++count;
            if(count%2 == 0){
                v2.push_back(ptr->val);
            }
            else{
                v1.push_back(ptr->val);
            }
            ptr = ptr->next;
        }
        v1.insert(v1.end(), v2.begin(), v2.end());
        int sz = v1.size();
        if(sz == 0) return NULL;
        ListNode *first = new ListNode;
        ListNode *temp;
        ListNode *last;
        
        first->val = v1[0];
        first->next = NULL;
        last = first;
        
        for(int i=1; i<sz; i++){
            temp = new ListNode;
            temp->val = v1[i];
            temp->next = NULL;
            last->next = temp;
            last = temp;
        }
        
     return first;   
    }
};