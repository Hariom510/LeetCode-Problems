class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd;
        int mini=INT_MAX,maxi=INT_MIN;
        // int maxi = INT_MAX;
        // int mini = INT_MIN;
        for(auto i: nums){
            mini = min(i, mini);
            maxi = max(maxi, i);
        }
        for(int i=1; i<= mini && i<= maxi; i++){
            if(mini%i ==0 && maxi%i == 0)
                gcd = i;
        }
        // int ans = __gcd(mini, maxi);
        // return ans;
        return gcd;
    }
};