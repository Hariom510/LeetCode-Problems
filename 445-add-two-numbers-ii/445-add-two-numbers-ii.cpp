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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         vector<int> v1, v2;
        
//         while(l1!=NULL){
//             v1.push_back(l1->val);
//             l1= l1->next;
//         }
//          while(l2!=NULL){
//             v2.push_back(l2->val);
//             l2= l2->next;
//         }
//         int carry=0, sum =0;
//         ListNode* ptr = NULL;
//         int m= v1.size(), n= v2.size();
//         for(int i=m-1, j= n-1; i>=0||j>=0|| carry>0; i--,j--){
//             sum = carry;
//             if(i>=0){
//                 sum += v1[i];
//             }
//             if(j>=0){
//                 sum += v2[j];
//             }
            
//             carry = sum/10;
//             ListNode* temp = new ListNode(sum%10);
//             temp->next = ptr;
//             ptr = temp;
            
//         }
//         return ptr;
        
        //By using stack
        
        stack<int> s1,s2;
        
        while(l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        int carry =0;
        int sum;
        ListNode *curr = NULL;
        while(!s1.empty() || !s2.empty() || carry){
            sum = carry;
            if(!s1.empty()){
                sum += s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum += s2.top();
                s2.pop();
            }
            carry = sum/10;
            ListNode *temp = new ListNode(sum%10);
            temp->next = curr;
            curr = temp;
        }
        return curr;
    }
};