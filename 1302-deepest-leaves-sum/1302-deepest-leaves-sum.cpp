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
    int deepestLeavesSum(TreeNode* root) {
       //we will find the sum at each level and then at last level sum will be return. 
        // if(root==nullptr)return 0;  //as node least number should be 1
        queue<TreeNode *> q;
        q.push(root);
        int sum;
        while(!q.empty()){
           int n = q.size();
            sum =0;
            for(int i=0; i<n; i++){
                 TreeNode * front = q.front();
                 q.pop();
                sum += front->val;
                if(front->left)q.push(front->left);
                if(front->right)q.push(front->right);
                
            }
        }
        return sum;
        
    }
};