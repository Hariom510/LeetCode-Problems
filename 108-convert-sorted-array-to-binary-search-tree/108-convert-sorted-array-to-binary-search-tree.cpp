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
    
    TreeNode* sortedBST(vector<int>& nums, int start, int end){
        if(start>end){
            return NULL;
        }
        int mid = (start+end)/2;
        TreeNode* t = new TreeNode(nums[mid]);
        t->left = sortedBST(nums, start, mid-1);
        t->right = sortedBST(nums, mid+1, end);
        
        return t;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedBST(nums, 0, nums.size()-1);
    }
};