class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int ans = INT_MIN;
        int l=0;
        while(j<n){
            if(nums[j++]==0)l++;
            
            while(l>1){
                if(nums[i++]==0)l--;
            }
            
            ans = max(ans, j-i-1);
        }
        
        return ans;
    }
};