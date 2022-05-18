class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(int i=0; i<words.size(); i++){
              bool check = true;
            for(int j=0; j<pref.size(); j++){
                if(words[i][j] != pref[j]){
                    check = false;
                    break;
                }
            }
            if(check) ans++;
        }
        return ans;
    }
};