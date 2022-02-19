class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        if(sz == 0 || strs[0] == "") return "";
        // if(strs[0] = "")
        string ans = "";
        
        sort(begin(strs), end(strs));
        string first = strs[0];
        string last = strs[sz-1];
        for(int i=0; i<first.size(); i++){
            if(first[i] == last[i]){
                ans += first[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};