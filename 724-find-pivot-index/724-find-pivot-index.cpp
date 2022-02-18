class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = nums.size();
        long int sum =0;
        for(int i=0; i<l; i++){
            sum += nums[i];
        }
        
        long int lsum = 0;
        long int rsum = sum;
        
        for(int i=0; i<l; i++){
            rsum = (rsum-nums[i]);
            if(lsum == rsum){
                return i;
            }
            lsum = lsum+nums[i];
        }
        return -1;
    }
};