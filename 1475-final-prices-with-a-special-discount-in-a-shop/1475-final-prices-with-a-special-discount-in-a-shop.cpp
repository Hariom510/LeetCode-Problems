class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v;
        
        for(int i=0; i<prices.size(); i++){
            v.push_back(prices[i]);
            for(int j=i+1; j<prices.size(); j++){
                if( prices[j]<= prices[i]){
                    v[i] = (prices[i] - prices[j]);
                    break;
                }
                
            }
        }
        return v;
    }
};