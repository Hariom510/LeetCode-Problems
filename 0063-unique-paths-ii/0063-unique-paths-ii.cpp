class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid,int m, int n, int i, int j,vector<vector<int>>& dp){
        if(i>m-1 || j>n-1 || obstacleGrid[i][j]==1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(i==m-1 && j==n-1)return 1;
        
        int res = solve(obstacleGrid,m,n,i,j+1,dp)+solve(obstacleGrid,m,n,i+1,j,dp);
        return dp[i][j]=res;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return solve(obstacleGrid,m,n,0,0,dp);
    }
};