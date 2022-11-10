class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(auto val : s){
            if(ans.size()==0) ans.push_back(val);
            else if(ans.back() == val) ans.pop_back();
            else{
                ans.push_back(val);
            }
        }
        return ans;
        
    }
};