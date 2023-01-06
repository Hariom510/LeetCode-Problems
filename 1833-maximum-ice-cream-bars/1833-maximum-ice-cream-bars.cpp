class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int n = costs.size();
        int res=0, sum=0;
        sort(costs.begin(), costs.end());
        for(int i=0; i<n; i++){
            sum+=costs[i];
            if(sum<=coins){
                res++;
            }
            else{
                break;
            }
        }
        return res;
    }
};