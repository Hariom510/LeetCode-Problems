class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        int total=0;
        for(int i=0; i<n; i++){
            total+= nums[i];
            pre[i]= total;
        }
        for(int i=0; i<n; i++){
            if(total-pre[i]+nums[i]==pre[i])return i;
        }
        return -1;      
        
        
        
        
//         vector<int> left(nums.size());
//         vector<int> right(nums.size());
//         int sum =0;
//         for(int i=0; i<nums.size(); i++){
//             left[i] = sum;
//             sum += nums[i];
//         }
//         sum =0;
//         for(int i=nums.size()-1; i>=0; i--){
//             right[i] = sum;
//             sum += nums[i];
//         }
        
//         for(int i=0; i<nums.size(); i++){
//                 if(left[i] == right[i])
//                 return i;
//             }
            
//         return -1;
    }
};