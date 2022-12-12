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
//        int solve(int n){
           
//            vector<int> dp(n+1);
//            dp[0]=dp[1]=1;
           
//            for(int i=2; i<=n; i++){
//                dp[i]= dp[i-1]+dp[i-2];
//            }
//            return dp[n];
//        }
    
    
    
    int climbStairs(int n) {
        //this is space optimized solutiom without using array and stack space
        int prev1 =1, prev2=1;
        for(int i=2; i<=n; i++){
            int cur = prev1+prev2;
            prev2=prev1;
            prev1=cur;
        }
        
        return prev1;
       
        //vector<int> dp(n+1, -1);
        // int res = solve(n); 
        // return res;
    }
};