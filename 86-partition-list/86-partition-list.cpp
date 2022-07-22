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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ptr = head;
        vector<int> v;
        
        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        vector<int> ans;
        
        for(auto i: v){
            if(i<x)
                ans.push_back(i);
        }
        for(auto i: v){
             if(i>=x)
                ans.push_back(i);
        }
        
        ptr = head;
        int i=0;
        while(ptr!=NULL){
            ptr->val = ans[i++];
            ptr= ptr->next;
        }
        
        return head;
        //ggg
    }
};