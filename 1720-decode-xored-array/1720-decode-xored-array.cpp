class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int n = encoded.size();
        
        // it can be proven that ans[i+1] = ans[i]^encoded[i];
        for(int i=0; i<n; i++){
            ans.push_back(ans[i]^encoded[i]);
        }
        return ans;
    }
};