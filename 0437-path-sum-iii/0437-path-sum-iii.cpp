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
    long long ans =0;
    void pre(TreeNode* root, long long targetSum){
        if(!root)return;
        
        targetSum -= root->val;
        if(targetSum==0)ans++;
        
        pre(root->left, targetSum);
        pre(root->right, targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        if(root){
            pre(root, targetSum);   
        }
        if(root->left)pathSum(root->left, targetSum);
        if(root->right)pathSum(root->right, targetSum);
        
        return ans;  
    }
};