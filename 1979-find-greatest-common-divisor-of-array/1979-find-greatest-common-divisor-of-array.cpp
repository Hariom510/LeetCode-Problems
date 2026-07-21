class Solution {
public:
    int findGCD(vector<int>& nums) {
        int sm;
        int lrg;
        sort(nums.begin(), nums.end());
        sm = nums[0];
        lrg = nums[nums.size()-1];
        return gcd(sm, lrg);
    }
};