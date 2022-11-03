class Solution {
    
public:
    int solve(int n, vector<int> &dp){
        if(n<=1) return n;
        
        if(dp[n]!=-1) return dp[n];
        return dp[n] = solve(n-1, dp)+ solve(n-2, dp);

    }
    
    int fib(int n) {
        // if(n<2)
        //     return n;
        // vector<int> v(n+1);
        // v[0] = 0;
        // v[1] = 1;
        // for(int i=2; i<=n; i++){
        //     v[i] = v[i-1] + v[i-2];
        // }
        // return v[n];
        
        //memoization
        vector<int> dp(n+1,-1);
        int res = solve(n,dp);
        return res;
        
    }
};