class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_set<int> s;
        int n= nums.size();
        
        for(auto num:nums){
            s.insert(num);
        }
        for(int i=1; i<=INT_MAX; i++){
            if(s.find(i)==s.end()){
               return i;
            }
        }
        return 0;
//         return v;
        
//         for(int i=1; i<INT_MAX; i++){
//             int j=0;
            
//         }
        
        
//         for(int i=1; i<INT_MAX; i++){
//             for(int j=0; j<nums.size(); j++){
//                 if(i == nums[j]){
//                     break;
//                 }
//                 else if(j==nums.size()-1 && i!= nums[j]){
//                     return i;
//                 }
//             }
//         }
//         return 0;
    }
};