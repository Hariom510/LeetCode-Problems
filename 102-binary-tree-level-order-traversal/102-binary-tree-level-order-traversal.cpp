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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> res;
        if(root == NULL) return res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int qsize = q.size();
            vector<int> add;
            
            while(qsize--){
                root = q.front();
                q.pop();
                
                add.push_back(root->val);
                if(root->left){
                    q.push(root->left);
                }
                if(root->right){
                    q.push(root->right);
                }
            }
            res.push_back(add);
            
        }
        return res;
        
        
    }
};