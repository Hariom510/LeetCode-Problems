class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> m;
        for(int i=0; i<t.size(); i++){
            m[s[i]]++;
            m[t[i]]--;
        }
        for(auto val: m){
            if(val.second) return false;
        }
        return true;
    }
};