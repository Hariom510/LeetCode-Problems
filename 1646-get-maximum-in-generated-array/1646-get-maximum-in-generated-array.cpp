class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int> nums(n+1);
        nums[0] =0;
        nums[1] =1;
        for(int i=1; i<=n/2; i++){
           nums[2*i] = nums[i];
           if(2*i+1 <=n)
               nums[2 * i + 1] = nums[i]+nums[i+1];
        }
        sort(nums.begin(), nums.end());
        return nums[n];
    }
};