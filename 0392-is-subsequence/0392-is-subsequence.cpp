class Solution {
public:
    bool solve(string s, string t, int n1,int n2){
        if(n1==0)return true;
        if(n2==0)return false;
        //we are traversing from last character
        //if last char of two strings matching
        if(s[n1-1]==t[n2-1]){
           return solve(s,t,n1-1,n2-1);
        }
        //if last char of two strings not matching
         return solve(s,t,n1,n2-1);
    }
    
    bool isSubsequence(string s, string t) {
//         int sz = s.size();
//         int ln = t.size();
//         int count =0;
//         int j=0;
//         for(int i=0; i<sz; i++){
//             while(j<ln){
//                 if(s[i] == t[j]){
//                     count++;
//                     j++;
//                     break;
//                 }
//                 j++;
//             }
//         }
//         if(count == sz) return true;
        
//         return false;
        
        //2nd method
        
//         int j=0;
//         for(int i=0; i<t.size() && j<s.size(); i++){
//             if(t[i]==s[j]) j++;
//         }
        
//         return j==s.size();
        
        //recursive approach
        int n1 = s.size();
        int n2 = t.size();
        return solve(s,t,n1,n2);
          
    }
};