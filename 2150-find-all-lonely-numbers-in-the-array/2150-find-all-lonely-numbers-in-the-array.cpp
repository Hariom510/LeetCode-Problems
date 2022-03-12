class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> v;
        for(auto num: nums){
            m[num]++;
        }
        for(int i=0; i<nums.size();i++){
            if(m[nums[i]] ==1){
                if(m.find(nums[i]+1) == m.end() && m.find(nums[i]-1) == m.end()){
                    v.push_back(nums[i]);
                }
            }
        }
        return v;
    }
};