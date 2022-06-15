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
    void average(TreeNode* root, int &ans){
        queue<TreeNode*> q;
        q.push(root);
        int sum =0;
        int cnt=0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
               TreeNode* front = q.front();
                q.pop();
                sum += front->val;
                cnt++;
                if(front->left)q.push(front->left);
                if(front->right)q.push(front->right);  
            }
        }
         if((sum/cnt)==root->val)
                ans++;
    }
    
    
    int averageOfSubtree(TreeNode* root) {
         queue<TreeNode*> q;
        q.push(root);
        int ans =0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
               TreeNode* front = q.front();
                q.pop();
                average(front,ans);
                if(front->left)q.push(front->left);
                if(front->right)q.push(front->right);  
            }
        }
         return ans;
      }
};