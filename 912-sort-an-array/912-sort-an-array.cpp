class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        
        for(auto num: nums){
            v.push_back(num);
        }
        return v;
    }
};