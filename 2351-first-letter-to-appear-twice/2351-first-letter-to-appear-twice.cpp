class Solution {
public:
    char repeatedCharacter(string s) {
        
        vector<bool> v(26);
        for(char i:s){
            if(v[i-'a']){
                return i;
            }
            
            v[i-'a'] = true;
        }
        return ' ';
        
       
    }
};