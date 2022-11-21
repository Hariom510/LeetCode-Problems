class Solution {
public:
    int solve(vector<int>& prices, int fee,int i,int buy,int n,vector<vector<int>> &dp){
        if(i==n)return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        int profit =0;
        if(buy==1){
            profit = max(-prices[i]-fee+solve(prices,fee,i+1,0,n,dp),
                        0+solve(prices,fee,i+1,1,n,dp));
        }
        else{
            profit = max(prices[i]+solve(prices,fee,i+1,1,n,dp),
                        0+solve(prices,fee,i+1,0,n,dp));
        }
        return dp[i][buy]=profit;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(prices,fee,0,1,n,dp);
    }
};