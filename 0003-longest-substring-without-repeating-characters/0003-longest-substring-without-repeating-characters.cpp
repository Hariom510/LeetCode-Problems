class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char, int> m;
        set<char> st;
        int res=0;
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(st.find(s[j])==st.end()){  // if s[j] is not in set
                st.insert(s[j++]);
                res = max(res, j-i);
            }
            
            else{
                st.erase(s[i++]);
            }  
        }
        return res;
    }
};