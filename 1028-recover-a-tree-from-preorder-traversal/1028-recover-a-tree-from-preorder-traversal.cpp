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
    TreeNode* recoverFromPreorder(string S) {
        unordered_map<int, TreeNode *> mp;
        int cur = 0;
        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '-') {
                cur += 1;
            }
            else {
                string num = "";
                while (i < S.size() && S[i] >= '0' && S[i] <= '9')
                    num += S[i++];
                i--;
                int cn = stoi(num);
                mp[cur] = new TreeNode(cn);
                if (cur)
                    if (mp[cur - 1]->left)
                        mp[cur - 1]->right = mp[cur];
                    else
                        mp[cur - 1]->left = mp[cur];
                cur = 0;
            }
        }
        return mp[0];
    }
};