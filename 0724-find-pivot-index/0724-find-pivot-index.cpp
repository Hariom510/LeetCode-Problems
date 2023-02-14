class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        long int total =0;
        vector<int> pre(n);
        for(int i=0; i<n; i++){
            total += nums[i];
            pre[i]= total;
        }
        for(int i=0; i<n; i++){
            if(total-pre[i]+nums[i]==pre[i])return i;
        }
        return -1;
//         long int lsum = 0;
//         long int rsum = sum;
        
//         for(int i=0; i<l; i++){
//             rsum = (rsum-nums[i]);
//             if(lsum == rsum){
//                 return i;
//             }
//             lsum = lsum+nums[i];
//         }
        // return -1;
    }
};