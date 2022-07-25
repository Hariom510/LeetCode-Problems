// #define pb push_back
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        vector<int> v2;
        vector<int> v3 = {-1, -1};
        for(int i=0; i<nums.size(); i++){
            if(nums[i]== target){
                v.push_back(i);
            }
        }
        if(v.size() == 1){
            return {v[0],v[0]};
        }
        if(v.size() == 2){
            return v;
        }
        else if(v.size()> 2){
            v2.push_back(v[0]);
            v2.push_back(v[v.size()-1]);
            return v2;
            
        }
        return v3;
        //hjy
    }
};