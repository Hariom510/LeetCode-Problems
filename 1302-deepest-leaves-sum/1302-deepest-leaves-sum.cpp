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
    //please  go through this solution many number of times.
    //this is awesome question.
    //for level order we have to use queue data structure.
    int deepestLeavesSum(TreeNode* root) {
        if(root== NULL) return 0;
        queue<TreeNode*> q;
        int sum=0;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            sum =0;
            for(int i=0; i<sz; i++){
                TreeNode* front = q.front();
                q.pop();
                sum += front->val;
                if(front->left != NULL)q.push(front->left);
                if(front->right != NULL) q.push(front->right);
            }
        }
        
        
          return sum;
        
        
    }
};