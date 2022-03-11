class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<int, int> m;
        for(auto ch: word1){
            m[ch-'a']++;    // ch-'a' covert it into integer bw 1 to 26
        }
        for(auto ch: word2){
            m[ch-'a']--;
        }
        for(int i=0; i<26; i++){
            if(abs(m[i]) >3) return false;
        }
        return true;
    }
};