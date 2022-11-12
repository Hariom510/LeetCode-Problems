class Solution {
public:
    int countVowelStrings(int n) {
//         int a=0,e=0,i=0,o=0,u=1;
        
//         for(int j=0;j<n;j++){
//             o += u;
//             i += o;
//             e += i;
//             a += e;
//         }
//         return a+e+i+o+u;
        
        //2nd method usig dp
        
        vector<int> dp(5, 1);
        //we calculating from 2nd last element
        while(--n){
            for(int j=3; j>=0; j--){
             dp[j] += dp[j+1];
           }
        }
        int res =0;
        for(auto k: dp) res+= k;
        return res;
        
    }
};