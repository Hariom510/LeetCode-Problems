class Solution {
public:
    //please rem the concept
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m1[256] ={0}, m2[256] = {0};
        
        for(int i=0; i<n; i++){
            if(m1[s[i]] != m2[t[i]]) return false;
            
            m1[s[i]] = i+1;
            m2[t[i]] = i+1;
        }
        
        
        //mjjuu bvgg56 980
        
        return true;
        
    }
};