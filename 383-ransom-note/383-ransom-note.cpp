class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(auto ch: ransomNote){
            m[ch]++;
        }
        for(auto chr: magazine){
            m[chr]--;
        }
        for(auto val: ransomNote){
            if( m[val] >0) return false;
        }
        return true;
    }
};