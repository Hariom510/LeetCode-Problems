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
    int solve(TreeNode* root){
        if(root==NULL)return 0;
        
        int sum =0;   //in each recursive call we declear sum to 0.
        if(root->val%2==0){
            if(root->left && root->left->left)sum += root->left->left->val;
            if(root->left && root->left->right)sum += root->left->right->val;
            
            if(root->right && root->right->right)sum += root->right->right->val;
            if(root->right && root->right->left)sum += root->right->left->val;
        }
        sum += solve(root->left);  //the previous sum will be added to the new sum
        sum += solve(root->right);
        
        return sum;
    }
    
    int sumEvenGrandparent(TreeNode* root) {
       int res = solve(root);
        
        return res;
    }
};