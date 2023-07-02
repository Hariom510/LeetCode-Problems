class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1==0 && n2==0)return true;
        
        int i=0;
        for(int j=0; j<n2; j++){
           if(t[j]==s[i]){
               i++;
           } 
           if(i==n1)return true;
           // else cout<<s[i]<< " ";
        }
        
        return false; 
    }
};