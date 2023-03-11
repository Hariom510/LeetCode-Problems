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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    TreeNode* bal(int start, int end){
        if(start>end) return NULL;
        
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = bal(start, mid-1);
        root->right = bal(mid+1, end);
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        ListNode* ptr=head;
        while(ptr!=NULL){
           v.push_back(ptr->val);
            ptr=ptr->next;
        }
        
        return bal(0, v.size()-1);
        
        
        
    }
};