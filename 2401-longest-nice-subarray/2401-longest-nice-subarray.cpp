class Solution {
public:
    //Awesome question (bit+sliding window)
    int longestNiceSubarray(vector<int>& nums) {
      int n= nums.size();
        int j=0,ans=0;
        // int maxi = INT_MIN;
        int num=0;
        
        for(int i=0; i<n; i++){
            
            //if problem then slide by using sliding window
            while(( num & nums[i] ) != 0){
                num ^= nums[j];
                j++;
                
            }
               num = num|nums[i];
               ans = max(ans, i-j+1);
        }
        return ans;
    }
};