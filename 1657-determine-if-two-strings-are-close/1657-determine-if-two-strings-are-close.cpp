class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char, int> m1;
        map<char, int> m2;
        
        for(auto i: word1){
           m1[i]++; 
        }
        for(auto i: word2){
            m2[i]++;
        }
        
        vector<int> v1, v2;
        set<char> s1, s2;
        for(auto i: m1){
            v1.push_back(i.second);
            s1.insert(i.first);
        }
        
        for(auto i: m2){
            v2.push_back(i.second);
            s2.insert(i.first);
        }
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        return (v1==v2 && s1==s2);
        
    }
};