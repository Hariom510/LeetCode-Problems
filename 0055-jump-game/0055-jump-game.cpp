class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return true;
        int index=n-1,i=n-2;
        while(i>=0){
            if(nums[i]+i >= index){
                index = i; 
            }
            if(index==0)return true;
            i--;
        }
        return false;   
    }
};