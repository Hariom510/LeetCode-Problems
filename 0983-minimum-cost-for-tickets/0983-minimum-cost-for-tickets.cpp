class Solution {
public:
    int solve(vector<int>& days, vector<int>& costs, int idx, int n,vector<int>& dp){
        if(idx>=n)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int option1 = costs[0]+ solve(days, costs,idx+1,n,dp);
        
        int i;
        for(i=idx; i<n && days[i]<days[idx]+7; i++);
        
        int option2 = costs[1]+ solve(days, costs, i,n,dp);
        
        for(i=idx; i<n && days[i]<days[idx]+30;i++);
        
        int option3 = costs[2]+ solve(days,costs, i,n,dp);
        
        return dp[idx]=min(option1, min(option2, option3));
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1, -1);            
        return solve(days, costs, 0, n,dp); 
    }
};