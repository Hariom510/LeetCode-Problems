class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // set<int> s;
        // vector<int> v;
        // for(int i=0; i<nums.size(); i++){
        //     s.insert(nums[i]);
        // }
        // for(auto num: s){
        //    v.push_back(num); 
        // }
        // nums = v;
        // // for(auto i: nums)
        // // cout << i << " ";
        // return v.size();   
        
        // for(int i=0; i<nums.size(); i++){
            nums.erase(unique(nums.begin(), nums.end()), nums.end());
            
        // }
        return nums.size();
        
    }
};