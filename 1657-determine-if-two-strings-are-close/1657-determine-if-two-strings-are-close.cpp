class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // unordered_map<char, int> m1;
        // unordered_map<char, int> m2;
        // int n1= word1.size();
        // int n2= word2.size();
        // if(n1!=n2)return false;
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        set<char> s1,s2;
        for(auto c: word1){
           v1[c-'a']++;
            s1.insert(c);
        }
        for(auto c:word2){
          v2[c-'a']++;
            s2.insert(c);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(), v2.end());
        
        return (v1==v2 && s1==s2);
    }
};