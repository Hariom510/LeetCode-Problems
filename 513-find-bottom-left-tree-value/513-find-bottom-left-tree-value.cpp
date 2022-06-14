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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* front;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                front = q.front();
                q.pop();
                //here is a change that we write first right node then left node.
                if(front->right)q.push(front->right);
                if(front->left)q.push(front->left);
            }
        }
        return front->val;
    }
};