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
    vector<TreeNode*> v;
    //storing sorted values in a vector
    void inor(TreeNode* root){
        if(root==NULL) return;
        
        inor(root->left);
        v.push_back(root);
        inor(root->right);
    }
    //forming balanced tree from mid elements
    TreeNode* bal(int start, int end){
        if(start>end) return NULL;
        
        int mid = (start+end)/2;
        TreeNode* root = v[mid];
        root->left = bal(start, mid-1);
        root->right = bal(mid+1, end);
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        inor(root);
        return bal(0, v.size()-1);
    }
    
    
};