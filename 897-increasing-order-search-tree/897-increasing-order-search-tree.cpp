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
    void inor(TreeNode* root, vector<int> &v){
        if(root==NULL) return;
        
        inor(root->left, v);
        v.push_back(root->val);
        inor(root->right, v);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        inor(root,v);
        
        int n = v.size();
        TreeNode* ntree = new TreeNode();
        ntree->val = v[0];
        ntree->right = NULL;
        ntree->left = NULL;
        TreeNode* p = ntree;
        TreeNode* t;
        for(int i=1; i<n; i++){
           t = new TreeNode();
           p->right = t;
           t->val = v[i];
           t->right = NULL;
           t->left = NULL;
            p=t;
           
        }
        return ntree;
    }
};