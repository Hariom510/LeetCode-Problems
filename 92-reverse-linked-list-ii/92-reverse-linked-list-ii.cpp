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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* ptr = head;
        vector<int> v;
        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        //index of vector starts from 0
        left--;
        right--;
        while(left<=right){
            swap(v[left++], v[right--]);
        }
        ptr = head;
        int i=0;
        while(i<v.size()){
            ptr->val = v[i];
            ptr = ptr->next;
            i++;
        }
        return head;
    }
};