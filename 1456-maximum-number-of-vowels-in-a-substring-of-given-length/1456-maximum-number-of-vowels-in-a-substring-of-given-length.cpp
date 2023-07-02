class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        
        return false;
    }
    
    
    int maxVowels(string s, int k) {
        int n= s.size();
        int i=0,j=0;
        int cnt=0;
        int ans = INT_MIN;
        while(j<n){
            if(isvowel(s[j++]) ){
                cnt++;
            }
            if(j-i == k){
                ans = max(ans, cnt);
                if(isvowel(s[i++]))cnt--;
            }
            
        }
        return ans;
        
    }
};