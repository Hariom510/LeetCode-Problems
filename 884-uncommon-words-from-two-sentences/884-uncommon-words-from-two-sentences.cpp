class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m;
        vector<string> v;
        string str = "";
        
        for(int i=0; i<s1.size(); i++){
            if(s1[i] ==' '){
                m[str]++;
                str.clear();
            }
            else{
                str += s1[i];
            }
        }
        m[str]++;
        str.clear();
         for(int i=0; i<s2.size(); i++){
            if(s2[i] ==' '){
                m[str]++;
                str.clear();
            }
            else{
                str += s2[i];
            }
        }
        m[str]++;
        str.clear();
        for(auto it: m){
            if(it.second ==1){
                v.push_back(it.first);
            }
        }
        return v;
    }
};