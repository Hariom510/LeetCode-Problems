class Solution {
public:
    int solve(vector<int> &dp, int n){
        if(n<=1)return 1;
        
        
        if(dp[n]!=-1)return dp[n];
        
        return dp[n] = solve(dp, n-1)+solve(dp, n-2);
    }
    
    
    
    
    int climbStairs(int n) {
      //  int prev2=1, prev1 =1;
      //  int res;
      //  for(int i=2; i<=n; i++){
      //      res = prev1+prev2;
      //      prev2 = prev1;
      //      prev1 = res;
      //  }  
      // return prev1;
        
        vector<int> dp(n+1, -1);
        int res = solve(dp, n);
        return res;
    }
};