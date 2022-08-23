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
    bool isPalindrome(ListNode* head) {
        //by using vector.
        vector<int> v;
        ListNode* ptr= head;
      while(ptr!= NULL){
         v.push_back(ptr->val);
          ptr = ptr->next;
     }
        int n = v.size();
        int j=0, k= (n-1);
        while(j<=k){
            if(v[j] != v[k]){
               return false; 
            }
            j++;
            k--;
        }
        return true;
        
        //by not using vector
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};