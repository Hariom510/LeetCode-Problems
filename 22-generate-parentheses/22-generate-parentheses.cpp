class Solution {    
public:
    //please go through it multiple times and remember it as well.
    void helper(vector<string> &v, int n, int oc, int cc, string s){
        //base case
        if(oc == n && cc ==n){
            v.push_back(s);
            return;
        }
        if(oc<n){
            helper(v, n, oc+1, cc, s+"(");
        }
        if(cc<oc){
            helper(v, n, oc, cc+1, s+")");
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int cc =0, oc =0;
        helper(v, n, oc, cc, "");
        return v;
    }
};