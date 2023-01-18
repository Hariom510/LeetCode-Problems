class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag=0;
        int n = word.size();
        int x=0;
        int cap=0,sm=0;
            if(word[x]>='A' && word[x]<='Z'){
                for(int i=1; i<n; i++){
                   if(word[i]>='A' && word[i]<='Z')cap++;
                    else sm++;
                }
               if(cap==n-1 || sm==n-1)flag=0;
                else flag=1;
                
                
          }
        else{
            cap=0;
            sm=0;
                for(int i=1; i<n; i++){
                   if(word[i]>='a' && word[i]<='z')sm++;
                }
               if(sm==n-1)flag=0;
                else flag=1; 
            }
       if(flag==0)return true;
        
        return false;
    }
};