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
    int maxLevelSum(TreeNode* root) {
        if (root == NULL) return 0;
        int maxLevelSum = INT_MIN;
        int level =0;
        int currMaxLevel =0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int count = q.size();
            int currSum =0;
            level++;
            while(count--){
                TreeNode* tmp = q.front();
                q.pop();
                currSum += tmp->val;
                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);
            }
            if(currSum > maxLevelSum){
                maxLevelSum = currSum;
                currMaxLevel = level;
            }
        }
        return currMaxLevel;
    }
};