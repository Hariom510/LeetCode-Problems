class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        for(auto i: candies){
            maxi = max(maxi, i);
        }
        int n = candies.size();
        vector<bool> v(n);
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies >= maxi){
                v[i] = true;
            }
            else{
                v[i] = false;
            }
        }
        return v;
    }
};