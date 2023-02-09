class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int j=0, i=0,ans=0;
        int cnt=0;
        while(j<n){
           
            if(nums[j]==0){
                cnt++;
            }
            
            while(cnt>1){
                if(nums[i]==0)cnt--;
                i++;
                
            }
            j++;
            ans = max(ans, j-i-1);
        }
        
        return (ans==n ? n-1: ans);
    }
};