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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root== NULL){
            TreeNode* t = new TreeNode();
            t->val = val;
            t->left = NULL;
            t->right = NULL;
            return t;
        }
        TreeNode* r = NULL;
        TreeNode* t;
        TreeNode* p = root;
        
        while(p!= NULL){
            r=p;
            if(val<p->val)
                p = p->left;
            else if(val>p->val)
                p = p->right;
        }
        t = new  TreeNode();
        t->val = val;
        t->left = NULL;
        t->right = NULL;
        if(val<r->val) r->left =t;
        else if(val>r->val) r->right =t;
        
        return root;
    }
};