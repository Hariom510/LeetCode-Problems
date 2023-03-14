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
    
    void solve(TreeNode* root, int targetSum, vector<vector<int>>&v,vector<int> &add){
        
        if(!root)return;
        add.push_back(root->val);
        targetSum = targetSum-root->val;
        // if(targetSum!=0 && !root->left && !root->right){
        //     add.pop_back();
        // }
        if(targetSum==0 && !root->left && !root->right){
            v.push_back(add);
        }
        if(root->left)solve(root->left,targetSum,v,add);
        if(root->right)solve(root->right, targetSum,v,add);
        add.pop_back();   //Backtracking
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> add;
        vector<vector<int>> v;
       // vector<int> v;
        solve(root,targetSum,v,add);
        return v;
    }
};