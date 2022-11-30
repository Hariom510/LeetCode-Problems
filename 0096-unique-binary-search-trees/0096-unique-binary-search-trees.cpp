class Solution {
public:
    //catela number is giving TLE 
    // long long fct(int n){
    //      long long fact =1;
    //     for(int i=1; i<=n; i++){
    //         fact = fact*i;
    //     }
    //     return fact;
    // }
    int numTrees(int n) {
        // int ans = (fct(2*n)/(fct(n)*fct(n)))/(n+1) ;
        //this memoizatin is also giving TLE
        vector<int> dp(n+1);
        // if(n<=1)return 1;
        // if(dp[n])return dp[n];
        //tabulation method
        if(n==1)return 1;
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        for(int i=3; i<=n;i++){
            for(int j=1;j<=i ; j++){
                dp[i] += dp[j-1]*dp[i-j];
            }
            
        }
        return dp[n];  
    }
    
};