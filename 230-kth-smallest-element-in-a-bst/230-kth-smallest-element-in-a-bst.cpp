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
private:
    vector<int> v;
public:
    void inor(TreeNode* root){
        if(root == NULL) return;
        
        inor(root->left);
        v.push_back(root->val);
        inor(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        // vector<int> v;
        inor(root);
        
        // for(int i=1; i<=v.size(); i++){
        //     if(i==k)
        //         return v[i];
        // }
        // sort(v.begin(), v.end());
        return v[k-1];
        // return 0;
    }
};