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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v1;
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> v2;
            int sz = q.size();
            for(int i=0; i<sz; i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                v2.push_back(front->val);
            }
            v1.push_back(v2);
        }
        reverse(v1.begin(), v1.end());
        return v1;
    }
};