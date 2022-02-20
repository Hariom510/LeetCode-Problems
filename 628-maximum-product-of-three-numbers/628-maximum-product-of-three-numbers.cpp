class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = nums.size();
        int ans1;
        int ans2;
        
          ans1 = nums[l-1]*nums[l-2]*nums[l-3];
          ans2 = nums[0]*nums[1]*nums[l-1];
        
        
        return max(ans1, ans2);
    }
};