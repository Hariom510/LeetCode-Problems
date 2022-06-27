class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        for(int i=0;i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                st.insert(s[i]-'0');
            }
        }
        vector<int> v(st.begin(), st.end());
        sort(v.begin(), v.end());
        if(v.size()>=2) return v[v.size()-2];
        
            return -1;
        
    }
};