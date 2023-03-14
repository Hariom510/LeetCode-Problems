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
    int sum=0;
    void solve(TreeNode* root, int currSum){
       currSum = currSum*10+ root->val;
        
       if(!root->left && !root->right){
           sum += currSum;
       }
        if(root->left){
            solve(root->left, currSum);
        }
        if(root->right){
            solve(root->right, currSum);
        }
    }
    int sumNumbers(TreeNode* root) {
        solve(root, 0); //initial currSum=0;
        return sum;
    }
    
};