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
    
    void pre(TreeNode* root, vector<TreeNode*> &v){
       if(root == NULL) return;
    
       v.push_back(root);
       pre(root->left,v);
       pre(root->right,v);
        
    }
    
    void flatten(TreeNode* root) {
        vector<TreeNode*> v;
        pre(root, v);
        int n= v.size();
        if(n==0) return;
        TreeNode* t = v[0];
        TreeNode* res = t;
        t->left =NULL;
        t->right = NULL;
        
        
        for(int i=1; i<n; i++){
            TreeNode* p= v[i];
            t->right = p;
            p->left =NULL;
            p->right = NULL;
            t =p;
        }
    }
};