class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target)
                return i;
            if(nums[i] > target)
                return i;
            else if(i == nums.size()-1 ){
                return  nums.size();
            }
        }
        return 0;
    }
};