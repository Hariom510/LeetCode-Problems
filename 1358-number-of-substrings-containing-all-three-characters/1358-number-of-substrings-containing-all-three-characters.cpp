class Solution {
public:
    int numberOfSubstrings(string s) {
        int m[3]={0};
        int i=0,j=0,ans=0;
        int n= s.size();
        for(int j=0; j<n; j++){
            m[s.at(j)-'a']++;
            
            while(m[0]>0 && m[1]>0 && m[2]>0 ){
                m[s.at(i)-'a']--;
                ans += (s.size()-j); // please remember this
                i++;  
            }
        }
        return ans;
    }
};