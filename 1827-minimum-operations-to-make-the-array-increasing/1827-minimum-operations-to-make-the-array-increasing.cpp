class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n= nums.size();
       int count =0;
        if(n<=1){
            return 0;
        }
        for(int i=0; i<n-1; i++){
                if(nums[i+1]>nums[i]){
                    continue;
                }
            else{
                count = count + (nums[i]+1 - nums[i+1]);
                nums[i+1] = nums[i]+1;
            }
        }
        return count;
    }
};