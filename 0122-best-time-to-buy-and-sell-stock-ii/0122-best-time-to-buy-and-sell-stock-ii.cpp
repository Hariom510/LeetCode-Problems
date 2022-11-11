class Solution {
public:
    int solve(vector<int>& prices, int idx, int buy, int n ,vector<vector<int>> &dp ){
        if(idx==n)return 0;
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        int profit =0;
        if(buy){
           profit = max(-prices[idx]+ solve(prices, idx+1, 0,n,dp),
                       0+ solve(prices, idx+1, 1,n,dp));
        }
        else{
          profit = max(prices[idx]+ solve(prices, idx+1, 1,n,dp),
                      0+solve(prices, idx+1, 0,n,dp));  
        }
        return dp[idx][buy]= profit;
    }
    int maxProfit(vector<int>& prices) {
        //Anuj bhaiya trick.
//         int profit =0;
        
//         for(int i=1; i<prices.size(); i++){
//             if(prices[i]>prices[i-1])
//                 profit += (prices[i]-prices[i-1]);
//         }
//         return profit;
        
        // int n = prices.size(), ans, res=0;
        // for(int i=1; i<n; i++){
        //     ans = max(0, (prices[i]-prices[i-1]));
        //     res += ans;
        // }
        // return res;
        
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2,-1));
        return solve(prices, 0, 1,n, dp); 
    }
};