class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;
        int j=0;
        while(j<n){
            if(m.find(nums[j]) != m.end()&& (j-m[nums[j]])<=k){
                return true;
            }
                   
            m[nums[j++]] = j;    
        } 
        return false;
        
//         unordered_map<int, int> m;
        
//         for(int i=0; i<nums.size(); i++){
            
//             if(m.find(nums[i]) != m.end()){
//                 if(abs(i-m[nums[i]]) <=k)
//                     return true;
//             }
            
//             m[nums[i]] = i;
//         } 
//         return false;
    }
        
        
        //this gives TLE 
        
    //     for(int i=0; i<nums.size(); i++){
    //        for(int j=i+1; j<nums.size(); j++){
    //             if(nums[i]==nums[j] && abs(i-j)<=k){
    //                 return true;
    //             }
    //        }
    //     }
    //  return false;
    // }
    
};