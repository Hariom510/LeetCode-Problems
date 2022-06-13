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
    void pre(TreeNode* root, vector<int> &v){
        if(root==NULL) return;
        
        v.push_back(root->val);
        pre(root->left,v);
        pre(root->right,v);
    }
        
        
    bool isUnivalTree(TreeNode* root) {
        vector<int> v;
        pre(root, v);
        
        for(int i=1; i<v.size(); i++){
            if(v[i] != v[i-1]) return false;
        }
        
        return true;
    }
};