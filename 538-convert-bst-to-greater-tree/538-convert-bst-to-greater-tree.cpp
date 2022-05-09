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
    TreeNode* convertBST(TreeNode* root) {
       int prev =0;
        sum(root, prev);
        
        return root;
    }
    
    void sum(TreeNode* root, int &prev){
        if(root == NULL) return;
        
        sum(root->right, prev);
        root->val += prev;
        prev = root->val;
        sum(root->left, prev);
        
    }
};