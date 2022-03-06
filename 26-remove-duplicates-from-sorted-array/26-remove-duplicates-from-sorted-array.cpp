class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> s;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        for(auto num: s){
           v.push_back(num); 
        }
        nums = v;
        return v.size();   
    }
};