class Solution {
public:
    long long solve(int idx , int n, bool iseven,vector<int>& nums,vector<vector<long long>> &dp){
        if(idx>=n)return 0;
        if(dp[idx][iseven]!=-1)return dp[idx][iseven];
        long long ans =0;
        if(iseven){
            long long choose = nums[idx]+ solve(idx+1, n, false, nums,dp);
            long long notChoose = solve(idx+1, n, true, nums,dp);
            ans = max(choose, notChoose);
        }
        else{
            long long choose = -nums[idx]+ solve(idx+1, n, true, nums,dp);
            long long notChoose = solve(idx+1, n, false, nums,dp);
            ans = max(choose,notChoose);
        }
        return dp[idx][iseven]=ans;   
    }
    
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>> dp(n, vector<long long>(2,-1));
        return solve(0, n, true,nums,dp);
    }
};