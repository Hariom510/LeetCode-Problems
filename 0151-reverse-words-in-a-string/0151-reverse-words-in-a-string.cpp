class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int n = s.size();
        vector<string> v;
        for(int i=0; i<n; i++){
            while(s[i]==' ' && i<n){
                i++;
            }
            
            while(s[i] != ' ' && i<n){
                res += s[i];
                // if(i==n-1)v.push_back(res);
                i++;
                 if(s[i]==' ' || s[i] == '\0' ){
                   v.push_back(res);
                    res = "";
                }
            }
            
        }
        reverse(v.begin(), v.end());
        string ans = "";
        for(int i=0; i<v.size(); i++){
            ans += v[i];
            if(i!=v.size()-1)ans += ' ';
        }
        
        return ans; 
    }
};