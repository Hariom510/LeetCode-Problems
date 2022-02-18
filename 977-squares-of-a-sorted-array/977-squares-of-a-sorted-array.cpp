class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++){
            int sqrt = (nums[i]*nums[i]);
            v.push_back(sqrt);
        }
        sort(v.begin(), v.end());
        return v;
    }
};