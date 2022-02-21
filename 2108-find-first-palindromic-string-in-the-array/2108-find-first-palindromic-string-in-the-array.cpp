class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       string st = "";
        
        int n = words.size();
        
        for(int i=0; i<n; i++){
             string ans = "";
            int sz = words[i].size();
            for(int j=sz-1; j>=0; j--){
                ans += words[i][j];
            }
            if(words[i] == ans){
                return words[i];
            }
        }
        return st;
    }
};