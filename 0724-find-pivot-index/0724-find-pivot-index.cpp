class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int total =0;
        vector<int> pre(n);
        for(int i=0; i<n; i++){
            total += nums[i];
            pre[i] = total;
        }
       
      
        for(int i=0; i<n; i++){
            if(pre[i]== total-pre[i]+nums[i])return i;   // leftsum == rightsum
        }
        
        return -1;
    }
};