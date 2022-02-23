class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++){
            if(i%10 == nums[i]){
                v.push_back(i);
            }
        }
        if(v.size() >=1)
        return v[0];
        else
            return -1;
    }
};