class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        bool oddcount = false;
        int ans =0;
        for(auto i: s){
            m[i]++;
        }
        for(auto ch: m){
            if(ch.second%2 ==0){
                ans += ch.second;
            }
            else{
                oddcount = true;
                ans += ch.second-1;
            }
        }
        if(oddcount) ans+=1;
        
        return ans;
    }
};