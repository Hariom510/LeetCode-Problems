class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int j=0,i=0,cnt=0,ans1=0,ans2=0;
        while(j<n){
            if(answerKey[j]=='F'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[i]=='F')cnt--;
                i++;
            }
            j++;
            ans1= max(ans1, j-i);
        }
        j=0,i=0,cnt=0;
        while(j<n){
            if(answerKey[j]=='T'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[i]=='T')cnt--;
                i++;
            }
            j++;
            ans2= max(ans2, j-i);
        }
        return max(ans1,ans2);
    }
};