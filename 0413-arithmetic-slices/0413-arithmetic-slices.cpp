class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        //please go through this soln many times and remember the process.
//       int ans =0;
//       int count =0;       
//         for(int i=1; i<nums.size()-1; i++){
//             if(nums[i-1] - nums[i] == nums[i] - nums[i+1])
//                 ans++;
//             else
//                 ans =0;
            
//             count += ans;
//         }
//         return count;
        int n =nums.size();
        vector<int> dp(n, 0);
        int res=0;
        if(n<=2) return 0;
        for(int i=1; i<n-1;i++){
            if(nums[i]-nums[i-1]==nums[i+1]-nums[i]){
                dp[i] = dp[i-1]+1;
            }
            res += dp[i];
        }
        return res;
    }
        
};