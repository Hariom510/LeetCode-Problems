class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr(len);
        arr[0] = nums[0];
        for(int i=1; i<len; i++){
            arr[i] = nums[i] + arr[i-1] ;
        }
        
        
       return arr; 
    }
};