class Solution {
    
    //remember it. it is back-tracking.
    void ans(string s, vector<string> &v, int i){
        if(i==s.size()){
            v.push_back(s);
            return;
        }
        if(s[i] >= '0' && s[i] <= '9'){
            ans(s,v,i+1);
        }
        else{
            s[i] = tolower(s[i]);
            ans(s,v,i+1);
            s[i] = toupper(s[i]);
            ans(s,v,i+1);
        }
    }
    
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> v;
        ans(s,v,0);
        return v;
    }
};