class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n = s.size();
        unordered_set<string> st;
        
        for(int i=0; i<n; i++){
            string temp ="";
            for(int j=0; j<=i; j++){
                temp += s[j];
            }
            
            st.insert(temp);
        }
        int ans=0;
        for(int i=0; i<words.size(); i++){
            if(st.find(words[i])!=st.end())
                ans++;
        }
        return ans;
    }
};