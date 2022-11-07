class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Anuj bhaiya trick.
//         int profit =0;
        
//         for(int i=1; i<prices.size(); i++){
//             if(prices[i]>prices[i-1])
//                 profit += (prices[i]-prices[i-1]);
//         }
//         return profit;
        
        int n = prices.size(), ans, res=0;
        for(int i=1; i<n; i++){
            ans = max(0, (prices[i]-prices[i-1]));
            res += ans;
        }
        return res;
        
    }
};