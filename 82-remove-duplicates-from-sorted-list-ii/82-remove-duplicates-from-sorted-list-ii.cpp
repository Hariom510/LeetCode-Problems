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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> v;
       vector<int> v2;
        unordered_map<int, int> m;
        ListNode *ptr = head;
        while(ptr!= NULL){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        for(int i=0; i<v.size(); i++){
            m[v[i]]++;
        }
        
        for(auto num:v){
            if(m[num] ==1){
                v2.push_back(num);
            }
        }
        // v.erase( unique( v.begin(), v.end() ), v.end() );
        int n= v2.size();
        if(n==0) return NULL;
        
        ListNode* first = new ListNode;
        ListNode* temp;
        ListNode* last;
        
        first->val = v2[0];
        first->next = NULL;
        
        last = first;
        
        for(int i=1; i<n; i++){
            temp = new ListNode;
            temp->val = v2[i];
            temp->next = NULL;
            
            last->next = temp;
            last = temp;
        }
        
        return first;
            
    }
};