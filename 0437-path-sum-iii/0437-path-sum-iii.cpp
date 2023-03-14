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
    long long cnt=0;
    void solve(TreeNode* root, long long targetSum){
        if(!root)return;
        targetSum = targetSum-root->val;
        if(targetSum==0)cnt++;
        
        if(root->left)solve(root->left,targetSum);
        if(root->right)solve(root->right, targetSum);
    }
    
    int pathSum(TreeNode* root, long long targetSum) {
        if(!root)return 0;
        solve(root,targetSum);
        if(root->left)pathSum(root->left, targetSum);
        if(root->right)pathSum(root->right, targetSum);
        // TreeNode* head=root->left;
        // while(head){
        //    solve(head, targetSum); 
        //     head = head->left;
        // } 
        // head=root->right;
        // while(head){
        //    solve(head, targetSum); 
        //     head = head->right;
        // } 
        return cnt;
    }
};