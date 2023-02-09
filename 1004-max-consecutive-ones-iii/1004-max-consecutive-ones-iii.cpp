class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0,i=0,ans=0;
        int zeroCount=0;
        while(j<n){
           
           if(nums[j]==0){
               zeroCount++;
           }
            while(zeroCount>k){
                if(nums[i]==0)zeroCount--;
                i++;  
            }
            
            // if(nums[j]==0 && k==0){
            //   if(nums[i]==0)k=1;
            //    else while(nums[i]!=0)i++; 
            //   i++;   
            //   j++;
            // }
            
            j++;
            ans=max(ans, j-i);
            
        }
        return ans;
    }
};