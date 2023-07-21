class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int maxi_l = nums[0];
        int curr = nums[0];
        int ans=1;
        for(int i=1; i<n-1; i++){
           if(nums[i]<maxi_l){
               maxi_l = curr;
               ans = i+1;
           }
            else if(nums[i]>curr){
                curr = nums[i];
            }
        }
        
        return ans;
    }
};