class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       //Sliding Window approach
        int m[26]={0};
        for(char c: s1){
            m[c-'a']++;
        }
        int j=0,i=0,n=s2.size();
        int total_chars=s1.size();
        while(j<n){
            if(m[s2.at(j++)-'a']-- >0 )
                total_chars--;
            
            if(total_chars==0)return true;
            
            //window sliding
            if(j-i==s1.size() && m[s2.at(i++)-'a']++ >=0)
                total_chars++;
        }
        return false;
    }
};