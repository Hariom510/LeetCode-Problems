class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
        
        for(int i=2; i<=n-2; i++){
            string temp = "";
            int num = n;
            while(num>0){
                temp += to_string(num%i);   // coverting to base i
                num /= i;
            }
            int l= 0, r = temp.size()-1;
            while(l<r){
                if(temp[l++]!=temp[r--])return false;
            }   
        }
        
        return true;
    }
};