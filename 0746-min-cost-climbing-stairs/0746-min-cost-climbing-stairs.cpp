class Solution {
public:
    int solve(vector<int>& cost, int idx, vector<int>& memo){
        if(idx<0) return 0;
        if(idx==cost.size()-1 || idx ==cost.size()-2){
            return cost[idx];
        }
        
        if(memo[idx]!=-1){
            return memo[idx];
        }
        int x = solve(cost, idx+1, memo);
        int y = solve(cost, idx+2, memo);
        memo[idx]= cost[idx]+ min(x,y);
        return memo[idx];
        
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        
        if(n==2) return min(cost[0], cost[1]);
        //uses memoization
        vector<int> memo(n+1, -1);
        int x = solve(cost, 0, memo);
        int y = solve(cost, 1, memo);
        return min(x,y);
    }
};