class Solution {
public:
    int minMoves(vector<int>& nums) {
        //please remember this logic
        //we are just reversing the problem statement
        int x = INT_MAX;
        //find min element
        for(int i=0; i<nums.size(); i++ ){
            x = min(nums[i], x);
        }
        int ans =0;
        //subtract min element from every num then add all
        for(int i=0; i<nums.size(); i++){
            ans += (nums[i] - x);
        }
        return ans;
    }
};