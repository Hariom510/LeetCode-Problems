class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase = false;
        bool decrease = false;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i])
                decrease = true;
            if(nums[i-1]<nums[i])
                increase = true;
        }
        
        return ((increase && decrease) ? false: true);
            
            
    }
};