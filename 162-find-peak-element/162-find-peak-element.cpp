class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        return max_element(nums.begin(), nums.end()) - nums.begin();
//         int ans;
//         vector<int> v;
//        if(nums.size() == 2){
//             if(nums[0] > nums[1]) return 0;
//             else if(nums[0] < nums[1]) return 1;
//         }
//         for(int i=1; i<nums.size()-1;i++){
//             if()
//             if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
//                 v.push_back(i);
//             }
//             else if
//         }
        
//         if(v.size() == 1) return v[0];
         
//         else if(v.size() >=2){
//             return (v[0] || v[1]);
// //             for(int i=0; i<v.size(); i++){
                
// //             }
//         }
//         return 0;
    }
};