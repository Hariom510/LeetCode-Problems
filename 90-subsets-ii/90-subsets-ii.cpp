class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v = {{}};
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for(auto num: nums){
            int n= v.size();
            for(int i=0; i<n; i++){
                v.push_back(v[i]);
                v.back().push_back(num);
            }
        }
        
        for(auto it: v){
            s.insert(it);
        }
        vector<vector<int>> v1(s.begin(), s.end());
        
        return v1;
    }
};