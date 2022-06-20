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
    int sumRootToLeaff(TreeNode* root, int sum){
        if(root==NULL) return 0;
        sum = (2*sum+ root->val);
        if(root->left==NULL && root->right==NULL) return sum;
        return sumRootToLeaff(root->left, sum)+ sumRootToLeaff(root->right,sum);
    }
    
public:
    int sumRootToLeaf(TreeNode* root) {
        return sumRootToLeaff(root,0);
    }
};