class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] ==1){
                count++;
            }
            else if(nums[i] ==0){
                v.push_back(count);
                count = 0;
            }
            if(i == nums.size()-1 && nums[i] ==1){
                v.push_back(count);
            }
        }
        sort(v.begin(), v.end());
        return v[v.size()-1];
    }
};