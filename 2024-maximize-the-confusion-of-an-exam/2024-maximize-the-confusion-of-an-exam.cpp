class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int ans1=0, ans2=0;
        int i=0,j=0, cnt=0;
        //for replacing F
        while(j<n){
            if(answerKey[j++]=='F')cnt++;
            
            while(cnt>k){
                if(answerKey[i++]=='F')cnt--;
            }
            
            ans1 = max(ans1, j-i);
        }
        
          //for replacing T
        i=0,j=0,cnt=0;
        while(j<n){
            if(answerKey[j++]=='T')cnt++;
            
            while(cnt>k){
                if(answerKey[i++]=='T')cnt--;
            }
            
            ans2 = max(ans2, j-i);
        }
        return max(ans1, ans2);
        
    }
};