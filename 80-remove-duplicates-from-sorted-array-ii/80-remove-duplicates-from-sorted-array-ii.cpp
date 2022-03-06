class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //it is requested to learn this process
        
        int i=0;
        for(auto n:nums){
            if(i<2 || n> nums[i-2]){  //for k dupicates use k in place of 2
                nums[i++] = n;
            }
        }
        return i;
    }
};