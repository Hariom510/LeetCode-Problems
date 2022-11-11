class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size(); 
        for(int i=0; i<n; i++){
            if(i+1<n && nums[i]==nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int i=0;
        //for non-zero elements
        for(auto num: nums){
            if(num!=0) nums[i++] = num;
        }
        //for zero elements
        while(i<nums.size()){
            nums[i++] =0;
        }
        return nums;
        
    }
};