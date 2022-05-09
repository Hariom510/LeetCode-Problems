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
    void inor(TreeNode* root, vector<int> &v){
        if(root == NULL) return;
        
        inor(root->left, v);
        v.push_back(root->val);
        inor(root->right, v);
    }
    
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inor(root, v);
        int n= v.size();
        int mini = (v[1]-v[0]);
        for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
               mini = min(mini, (v[j]-v[i]));
           }
        }
        return mini;
    }
};