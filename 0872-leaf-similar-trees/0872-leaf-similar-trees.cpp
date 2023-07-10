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
        if(root==NULL)return;
        
        if(!root->left && !root->right)v.push_back(root->val);
        pre(root->left, v);
        pre(root->right, v);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      
         vector<int> v1;
         vector<int> v2;
        pre(root1, v1);
        pre(root2, v2);
        
   
        
        // for(auto i:v1)cout<<i<<" ";
        
        return v1==v2;
        
    }
};