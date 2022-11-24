class Solution {
public:
    int solve(int m, int n,int i, int j,vector<vector<int>> &dp){
       if(i>m-1 || j>n-1)return 0;
       if(dp[i][j]!=-1)return dp[i][j];
       if(i==m-1 && j==n-1){
           return 1;
       }
        int res = solve(m,n, i, j+1,dp)+ solve(m,n, i+1, j,dp);
        return dp[i][j]=res;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(m,n,0,0,dp);
    }
};