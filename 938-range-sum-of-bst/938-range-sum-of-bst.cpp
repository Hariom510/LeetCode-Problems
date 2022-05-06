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
        inor(root->right,v);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> v;
        inor(root, v);
        int n= v.size();
        int sum =0;
        int lind, rind;
        for(int i=0; i<v.size(); i++){
              if(v[i] == low) lind = i;
              if(v[i] == high) rind = i;
        }
        for(int i=lind; i<=rind; i++){
            sum += v[i];
        }
        
        return sum;
    }
};