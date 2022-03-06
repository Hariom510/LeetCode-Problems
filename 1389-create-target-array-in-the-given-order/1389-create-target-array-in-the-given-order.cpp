class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        //remember the insert method of vector stl
        vector<int> v;
        
        for(int i=0; i<index.size(); i++){
            v.insert(v.begin()+index[i] , nums[i]);
        }
        return v;
    }
};