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
    int maxAncestorDiff(TreeNode* root, int mini=INT_MAX, int maxi=INT_MIN) {
        
        if(root==NULL)return(maxi-mini);
        
        mini= min(root->val,mini);
        maxi = max(root->val, maxi);
        
        return max(maxAncestorDiff(root->left, mini, maxi), maxAncestorDiff(root->right, mini, maxi));
    }
};