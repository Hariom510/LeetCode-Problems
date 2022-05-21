class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans =0;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int i= 0;
        int j= nums.size()-1;
        while(i<j){
            if((nums[i]+nums[j])==k){
                ans++;
                i++;
                j--;
            }
            else if((nums[i]+nums[j]) >k){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};