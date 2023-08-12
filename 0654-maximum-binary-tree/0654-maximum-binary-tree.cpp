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
    TreeNode* solve(vector<int>& v, int left, int right){
        if(left>right)return nullptr;
        
        int maxIdx = left;
        for(int i=left; i<=right; i++){
            if(v[i]>v[maxIdx])maxIdx = i;
        }
        TreeNode* root = new TreeNode(v[maxIdx]);
        
        root->left = solve(v, left, maxIdx-1);
        root->right = solve(v, maxIdx+1, right);
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* res = solve(nums, 0, nums.size()-1);
        
        return res;
    }
};