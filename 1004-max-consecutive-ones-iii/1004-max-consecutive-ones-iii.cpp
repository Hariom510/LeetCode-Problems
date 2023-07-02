class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        int i=0,j=0;
        int ans=INT_MIN;
        int l=0;
        while(j<n){
            if(nums[j++]==0){
                l++;
            }
            
            // if(l > k){
                
                
                while(l>k){
                   if(nums[i++]==0)l--; 
                }
            // }
            
            ans = max(ans, j-i);
        }
        
        return ans;
    }
};