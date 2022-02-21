class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
       long int ans1, ans2;
        sort(nums.begin(), nums.end());
        
            ans1 = ((nums[n-1]*nums[n-2]) - (nums[0]*nums[1]));
            // ans2 = ()
        
        return ans1;
    }
};