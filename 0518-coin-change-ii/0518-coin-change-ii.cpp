class Solution {
public:
    int solve(int idx, int amount, vector<int> &coins,vector<vector<int>>& dp){
        if(idx==0){
            return (amount%coins[idx]==0); //it will return 0 or 1
        }
        if(dp[idx][amount]!=-1)return dp[idx][amount];
        int notTake = solve(idx-1, amount, coins,dp);
        int take =0;
        if(coins[idx]<=amount)take = solve(idx, amount-coins[idx], coins,dp);
        return dp[idx][amount]=take+notTake;
    }
    int change(int amount, vector<int>& coins) {
       //please remember this approch 
        int n = coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1,-1));
        return solve(n-1, amount, coins,dp);
    }
};