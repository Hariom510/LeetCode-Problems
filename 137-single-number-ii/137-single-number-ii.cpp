class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto num: nums){
            if(m[num] ==1){
                return num;
            }
        }
        return 0;
    }
};