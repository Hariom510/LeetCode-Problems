class Solution {
public:
    int removePalindromeSub(string s) {
        //please remember it that maximum only two steps are required.
        int ans =0;
        
        if(s =="") return 0;
        
        for(int i=0, j=s.size()-1; i<j; i++,j--){
            if(s[i] != s[j]) return 2;
        }
        return 1;
    }
};