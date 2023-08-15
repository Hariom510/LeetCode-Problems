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
    vector<int> v;
    void inorder(TreeNode* root){
        if(!root)return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        return; 
    }
    TreeNode* bst( int start, int end){
        if(start>end)return NULL;
        
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = bst(start, mid-1);
        root->right = bst(mid+1, end);
        
        return root;
        
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        // vector<int> v = inor(root);
        inorder(root);
        int n = v.size();
        TreeNode* res = bst(0, n-1);
        return res;
    }
};