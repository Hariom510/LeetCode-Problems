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
        
        
        // O(n)
        
//         int n = nums.size();
//         int i=0, j=i;
//         while(i<n && j<n){
//             j++;
//             if(nums[i]+nums[j] == target){
//                 return {i, j};
                
//             }
//             if(j==n-1){
//                 i++;
//                 j=i;
//             }
//         }
//         return {-1, -1};
        
        //O(n) using map
        int n= nums.size();
        map<int, int> m;
        for(int i=0; i<n; i++){
           if(m.find(target-nums[i]) != m.end()){
               return { m[target-nums[i]] ,i};
           } 
            
            
            m[nums[i]] = i; //as we need to return indsx so we are assigning index.
        }
        return {-1, -1};
    };
};
