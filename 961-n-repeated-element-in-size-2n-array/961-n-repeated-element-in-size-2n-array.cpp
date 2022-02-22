class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int sz = nums.size();
        int count=1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<sz-1; i++){
            
            if(nums[i] == nums[i+1]){
                count++;
            }
            if(count == sz/2){
                return nums[i];
            }
            
        }
        return 0;
        
    }
};