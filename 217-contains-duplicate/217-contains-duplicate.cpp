class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto num: nums){
            if(m[num] >=2){
                return true;
            }
        }
        return false;
    }
};