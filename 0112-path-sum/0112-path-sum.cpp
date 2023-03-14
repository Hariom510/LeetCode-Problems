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
//     int sum=0;
//     int flag=0;
//     void solve(TreeNode* root, int currSum, int targetSum){
//          if(sum==targetSum){
//                flag=1;
//                return;
//            }
//        currSum = currSum*10+root->val;
       
//        if(!root->left && !root->right){
//            sum += currSum;
//        }
       
//         if(root->left){
//              solve(root->left, currSum, targetSum);
//         }
//         if(root->right){
//             solve(root->right, currSum, targetSum);
//         }
        
//     }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        targetSum = targetSum-root->val;
        if(targetSum==0 && !root->left && !root->right)return true;
        
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
        
    }
};