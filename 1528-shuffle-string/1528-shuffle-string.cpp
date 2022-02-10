class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str = s;
        int n = indices.size();
        
        for(int i=0; i<n; i++){
            str[indices[i]] = s[i];
            }
        
        return str;
    }
};