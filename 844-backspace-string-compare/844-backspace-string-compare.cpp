class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string r1="";
        string r2="";
        int i=0;
        while(s[i] != '\0'){
            if(s[i]>='a' && s[i] <= 'z')
                r1 += s[i];
            else if(!r1.empty())
                r1.pop_back();
            ++i;
        }
        i=0;
        while(t[i] != '\0'){
            if(t[i]>='a' && t[i] <= 'z')
                r2 += t[i];
            else if(!r2.empty())
                r2.pop_back();
            ++i;
        }
        
        if(r1.compare(r2) ==0) return true;
        return false;
    }
};