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
    vector<int> v;
    void inor(TreeNode* root){
        if(root==NULL)return;
        
        inor(root->left);
        v.push_back(root->val);
        inor(root->right);
        
        return;  
    }    
    
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        inor(root1);
        inor(root2);
        
       
        sort(v.begin(), v.end());
        return v;
        
    }
};