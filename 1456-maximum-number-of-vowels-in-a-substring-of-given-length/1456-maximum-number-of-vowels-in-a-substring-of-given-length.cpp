class Solution {
    private:
    bool isvowel(char c){
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            return true;
        
        return false;
    }
public:
    int maxVowels(string s, int k) {
       int n= s.size();
        int j=0,i=0,cnt=0,ans=0;
        while(j<n){
            if(isvowel(s[j]))cnt++;
            
            if(j-i+1==k){
                ans= max(ans,cnt);
                if(isvowel(s[i]))cnt--;
                i++;
            }
            j++;
        }
        return ans;
    }
};