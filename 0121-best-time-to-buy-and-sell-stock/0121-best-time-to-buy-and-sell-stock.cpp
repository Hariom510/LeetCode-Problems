class Solution {
public:
//     int solve(vector<int> &dp){
        
//     }
    
    int maxProfit(vector<int>& prices) {
//         int ans=0;
//         int l = prices.size();
//         int buy = prices[0];
//         for(int i=1; i<l; i++){
            
//             ans = max(ans, (prices[i]-buy));
//             buy = min(buy, prices[i]);
//         }
//         return ans;
        int n = prices.size();
        int maxProfit = 0, buy = INT_MAX; 
        for(int i=0; i<n; i++){
            buy = min(buy, prices[i]);
            maxProfit = max(maxProfit, prices[i]-buy);
            
        }
       
        return maxProfit;
        
    }
};