class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
        int res=0;
        map<char, int> m;
        for(int i=0; i<n; i++){
            if(m.find(s[i])!=m.end()){
                // cout<<i<<" ";
                res++;
                m.clear();
            }
            
            m[s[i]]++;
        }
        if(!m.empty())res++;
        
        return res;
    }
};