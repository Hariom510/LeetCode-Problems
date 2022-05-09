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
    TreeNode* bstToGst(TreeNode* root) {
        int prev =0;
        sumNode(root,prev);
        return root;
    }
    
     void sumNode(TreeNode* root, int &prev){
        if(root==NULL) return;
        sumNode(root->right, prev);
        root->val += prev;
        prev = root->val;
        sumNode(root->left, prev);
    }
};