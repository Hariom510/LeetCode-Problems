class Solution {
public:
    //in this question simple recursion is giving TLE.
    
    //this is memoization.
//     int solve(int n, vector<int> &dp){
//         if(n<=1) return 1;
        
//         if(dp[n]!=-1) return dp[n];
//         return dp[n] = solve(n-1, dp)+solve(n-2, dp);
//     }
       
       //this is tabulation (which not uses stack space)
       int solve(int n){
           
           vector<int> dp(n+1);
           dp[0]=dp[1]=1;
           
           for(int i=2; i<=n; i++){
               dp[i]= dp[i-1]+dp[i-2];
           }
           return dp[n];
       }
    
    
    
    
    
    int climbStairs(int n) {
        //please remember that this is just a fibonacci series
        // if(n<=2) return n;
        // int prev = 2, prev2 =1;
        // int res;
        // for(int i=3; i<=n; i++){
        //     res = prev+prev2;
        //     prev2 = prev;
        //     prev = res;
        // }
        // return res;
        //vector<int> dp(n+1, -1);
        int res = solve(n);
        return res;
    }
};