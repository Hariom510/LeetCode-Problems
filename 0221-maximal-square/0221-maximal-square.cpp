class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        //this questiom is similar to #1277 problem
        int res =0;
        int m = matrix.size();
        int n = matrix[0].size();
        //we will use tabulation
        //refer striver 
        //bottom right corner approach
        vector<vector<int>> dp(m, vector<int>(n,0));
        for(int i=0; i<n;i++){
            dp[0][i]=matrix[0][i]-'0';
        }
        for(int i=0; i<m;i++){
            dp[i][0] = matrix[i][0]-'0';
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j]=='0') dp[i][j]=0;
                else{
                dp[i][j]= 1 + min(dp[i-1][j], min(dp[i-1][j-1],
                             dp[i][j-1]));
                }
                // res = max(res, dp[i][j]);
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res = max(res,dp[i][j]);
            }
        }
        
        return res*res;
        
    }
};