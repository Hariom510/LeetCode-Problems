class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> v(n);
        int temp =1;
        for(int i=0; i<n; i++){
            v[i] = temp;
            temp = temp*nums[i]; //for next iteration
        }
        temp = 1;
        for(int i=n-1; i>=0; i--){
            v[i] = v[i]*temp;
            temp = temp*nums[i]; //for next iteration
        }
        
        return v;
    }
};