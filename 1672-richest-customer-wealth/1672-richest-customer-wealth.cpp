class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sz = accounts.size();
        int max =0;
        
        for(int i=0;i<sz; i++){
            int sum =0;
            int ss = accounts[i].size();
           for(int j=0; j<ss; j++ ){
               sum += accounts[i][j];
           }
            if (sum > max)
                max = sum;
        }
        return max;
    }
};