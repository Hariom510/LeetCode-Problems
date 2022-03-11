class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n= s.size();
        unordered_map<char, int> m;
        for(int i=0; i<n; i++){
            m[s[i]]++;
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(m[s[j]] != m[s[i]])
                    return false;
            }
        }
        return true;
    }
};