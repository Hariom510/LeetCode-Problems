class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //   int len = nums.size();
    // for(int i = 0; i < len; i++) {
    //     for(int j = i + 1; j < len; j++) {
    //         if(nums[j] + nums[i] == target)
    //             return { i, j };
    //     }
    // }
    // return {-1, -1};
        
        int n = nums.size();
        int i=0, j=i;
        while(i<n && j<n){
            j++;
            if(nums[i]+nums[j] == target){
                return {i, j};
                
            }
            // else{
            //     return {i, j};
            // }
            
            if(j==n-1){
                i++;
                j=i;
            }
        }
        return {-1, -1};
    };
};
