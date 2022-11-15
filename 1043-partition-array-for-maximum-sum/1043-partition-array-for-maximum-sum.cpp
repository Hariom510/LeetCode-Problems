class Solution {
public:
    //this is best recursion problem that you can draw on paper
    //please rem below logic by striver
    int solve(vector<int>& arr,int idx,int n, int k,vector<int>& dp){
        if(idx==n)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int maxi = INT_MIN;
        int maxAns = INT_MIN;
        int len=0;
        for(int j=idx; j<min(idx+k,n);j++){
            len++;
            maxi = max(maxi, arr[j]);
            int sum = len*maxi + solve(arr,j+1,n,k,dp);
            maxAns = max(maxAns, sum);
        }
        return dp[idx]=maxAns;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int> dp(n+1,-1);
        int res = solve(arr,0,n,k,dp);
        return res;
    }
};