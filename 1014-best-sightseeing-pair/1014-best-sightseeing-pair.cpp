class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int maxi =INT_MIN;
        //this will give TLE
        
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n;j++){
        //         int res= (values[i] + values[j] + i - j);
        //         maxi = max(maxi, res );
        //     }
        // }
        // return maxi;
        
        int x = values[0]+0;
        for(int j=1;j<n; j++){
            maxi = max(maxi, x+ values[j]-j);
            x = max(x, values[j]+j);
        }
        return maxi;
    }
};