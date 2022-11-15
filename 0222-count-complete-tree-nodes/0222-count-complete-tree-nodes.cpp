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
   
//     void pre(TreeNode* root, vector<int> &v){
//         if(root==NULL)return;
        
//         v.push_back(root->val);
//         pre(root->left,v);
//         pre(root->right,v);
//         return;
//     }
    int countNodes(TreeNode* root) {
        // int res =0;
        // vector<int> v;
        // pre(root,v);
        // //in this method the time complexity will be o(n)
        // return v.size();
        
        if(root==NULL)return 0;
        int hl=0,hr=0;
        TreeNode* l=root;
        TreeNode* r=root; 
        
        while(l){hl++; l=l->left;}
        while(r){hr++; r=r->right;}
        if(hl==hr)return pow(2,hl)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
          
    }
};