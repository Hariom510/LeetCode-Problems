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
    TreeNode* root = NULL;
public:
    void insert(int data){
        TreeNode* t = root;
        TreeNode* r, *p;
        if(root == NULL){
            p = new TreeNode();
            p->val = data;
            p->left = NULL;
            p->right = NULL;
            root = p;
            return;
        }
        while(t!=NULL){
            r=t;
            if(data<t->val){
               t= t->left; 
            }
            else if(data>t->val){
                t= t->right;
            }
        }
            p = new TreeNode();
            p->val = data;
            p->left = NULL;
            p->right = NULL;
        
        if(data<r->val){
            r->left = p;
        }
        else if(data>r->val){
            r->right = p;
        }
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n= preorder.size();
        for(int i=0; i<n; i++){
            insert(preorder[i]);
        }
        
        return root;
    }
};