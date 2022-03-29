class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        vector<int> v;
        if(n==0) return true;
        for(int i=0; i<n; i++){
            if((s[i]>='A' && s[i] <= 'Z') || (s[i]>='a' && s[i] <= 'z')
              || (s[i]>='0' && s[i] <= '9')){
                v.push_back(tolower(s[i]));
            }
        }
        int l= 0;
        int r= v.size()-1;
        while(l<r){
            if(v[l] != v[r])return false;
            l++;
            r--;
        }
        return true;
    }
};