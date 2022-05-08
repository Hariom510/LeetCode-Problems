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
    int findSecondMinimumValue(TreeNode* root) {
        inor(root);
        
        // sort(v.begin(), v.end());
        set<int> s;
        for(int i: v){
            s.insert(i);
        }
        vector<int> v1(s.begin(), s.end());
        // sort(v1.begin(), v1.end());
        if(v1.size()>=2){
            return v1[1];
        }
        
        return -1;
        
    }
};