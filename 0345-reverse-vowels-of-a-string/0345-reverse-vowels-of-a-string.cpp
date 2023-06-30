class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c== 'e' || c=='i'|| c=='o' || c=='u' || c== 'A' || c== 'E' || c=='I'|| c=='O' || c=='U'){
            return true;
        }
        
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int n= s.size();
        int j= n-1;
        while(i<j){
            if(isvowel(s[i]) == false)i++;
            if(isvowel(s[j]) == false) j--;
            
            
            if(isvowel(s[i]) && isvowel(s[j])){
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
                i++;
                j--;
            }
            
        }
        
        return s;
    }
};