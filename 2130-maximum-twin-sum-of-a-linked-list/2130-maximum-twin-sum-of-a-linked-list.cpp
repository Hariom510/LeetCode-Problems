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
//         vector<int> v;
//         ListNode *p = head;
        
//         while(p != NULL){
//             v.push_back(p->val);
//             p = p->next;
//         }
//         int i=0, j= v.size()-1;
//         int maxi = 0;
//         while(i<j){
//             maxi = max(maxi, v[i++]+v[j--]);
//         }
//         return maxi;
        
        
        
        //get middle element
        ListNode *slow =head;
        ListNode *fast = head;
        
        while(fast && fast->next){
            slow = slow->next;        //slow will give the middle element
            fast = fast->next->next;
        }
        
        //reverse the second half (rembermber the below awesome logic)
        ListNode *prev = NULL;
        ListNode *nextnode;
        while(slow){
            nextnode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextnode;
        }
        
        int maxi =0;
        while(prev){
            maxi = max(maxi, head->val+prev->val);
            prev = prev->next;
            head = head->next;
        }
        
        return maxi;
           
    }
};