class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto num: nums){
            if(m[num] ==1){
                v.push_back(num);
            }
        }
        return v;
    }
};