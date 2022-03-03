class Solution {
public:
    int lengthOfLastWord(string s) {
        int len =0;
        int n = s.size();
        int tail = n-1;
        
        while(tail>=0 && s[tail] == ' ') tail--;   
        
        while(tail>=0 && s[tail] != ' ' ) {
            len++;
            tail--;
            }
        
        return len;
    }
};