class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sz = s.size();
        int ln = t.size();
        int count =0;
        int j=0;
        for(int i=0; i<sz; i++){
            while(j<ln){
                if(s[i] == t[j]){
                    count++;
                    j++;
                    break;
                }
                j++;
            }
        }
        if(count == sz) return true;
        
        return false;
    }
};