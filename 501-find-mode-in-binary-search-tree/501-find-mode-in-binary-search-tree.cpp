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
    unordered_map<int,int> m;
    void inor(TreeNode* root){
        if(root==NULL) return;
        inor(root->left);
        m[root->val]++;
        inor(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        inor(root);
        priority_queue<pair<int,int>> pq;
        for(auto i=m.begin(); i!=m.end(); i++){
            pq.push({i->second, i->first});
        }
        
        int maxi = pq.top().first;
        while(!pq.empty()&& maxi==pq.top().first){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
        
    }
};