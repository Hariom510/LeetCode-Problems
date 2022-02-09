class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int sz = nums.size();
        vector<int> arr(sz);
        for(int i=0; i<sz; i++){
            arr[i] = nums[nums[i]];
        }
        return arr;
    }
};