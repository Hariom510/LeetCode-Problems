class Solution {
public:
    string removeStars(string s) {
      string res ="";
        int i=0;
        while(s[i]!='\0'){
            if(s[i]>='a' && s[i]<='z'){
                res+= s[i];
            }
            else{
                res.pop_back();
            }
            i++;
        }
        return res;
    }
};