class Solution {
public:
    int minPairSum(vector<int>& nums) {
        //remember the problem is asking for mininized maximum pair.
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int ans =0;
        for(int i=0; i<n; i++){
            ans = max(ans, nums[i]+nums[n-1-i]);
        }
        return ans;
    }
};