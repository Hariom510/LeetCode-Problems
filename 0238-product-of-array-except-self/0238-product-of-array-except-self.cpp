class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zeros = count(nums.begin(), nums.end(), 0);
        if(zeros>=2) return vector<int>(size(nums),0);
        int prod=1;
        for(auto p: nums){
           if(p!=0)prod = prod*p;
        }
        for(auto &val: nums){
            if(zeros==1){
               val = val ? 0 : prod; 
            }
            else{
                val = prod/val;
            }
        }
        
        return nums;
        
//         int n = nums.size();
//         vector<int> v(n);
//         int temp =1;
//         //multiplying from left side
//         for(int i = 0; i < n; i++){
//            v[i] = temp;
//            temp = temp*nums[i];
//         }
//         //multiplying from right side
//         temp =1;
//         for(int i= n-1; i>=0; i--){
//             v[i] = v[i]*temp;
//             temp = temp*nums[i];
//         }

//         return v;
    }
};