class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        //please go through this soln many times.
      int ans =0;
      int count =0;
        
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i-1] - nums[i] == nums[i] - nums[i+1])
                ans++;
            else
                ans =0;
            
            count = count+ans;
        }
        return count;
    }
        
};