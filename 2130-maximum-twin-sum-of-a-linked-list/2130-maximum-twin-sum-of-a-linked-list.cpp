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
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode *p = head;
        
        while(p != NULL){
            v.push_back(p->val);
            p = p->next;
        }
        int i=0, j= v.size()-1;
        int maxi = 0;
        while(i<j){
            maxi = max(maxi, v[i++]+v[j--]);
        }
        return maxi;
        
    }
};