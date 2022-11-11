class Solution {
public:
        int solve(vector<int>& prices, int idx,int buy, int cap, int n,vector<vector<vector<int>>> &dp){
        if(idx==n || cap==0) return 0;
        if(dp[idx][buy][cap]!=-1) return dp[idx][buy][cap];
        int profit =0;
        if(buy){
            profit = max(-prices[idx]+ solve(prices, idx+1, 0, cap, n,dp),
                        0+ solve(prices, idx+1, 1, cap, n,dp));
        }
        else{
            profit = max(prices[idx]+ solve(prices, idx+1, 1, cap-1, n,dp),
                        0+ solve(prices, idx+1, 0, cap, n,dp));
        }
        return dp[idx][buy][cap]=profit;
        
    }
    
    int maxProfit(int k, vector<int>& prices) {
         //cap=2 means maximum trasaction capacity here is 2;
        int n = prices.size();
        //here for memoization we have to use 3d vector
        //dp[idx][buy][cap] where cap can have 0,1,2 values.
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k+1,-1)));
        return solve(prices,0,1,k,n,dp);
    }
};