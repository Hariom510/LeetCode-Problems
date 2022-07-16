class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() <2) return 0;
        sort(nums.begin(), nums.end());
        int maxi = INT_MIN;
        for(int i=0; i<nums.size()-1; i++){
            int d = (nums[i+1]-nums[i]);
            maxi = max(maxi, d);
        }
        return maxi;
    }
};