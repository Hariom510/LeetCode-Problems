class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        //optimal solution
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.begin()+(n-k));
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(), nums.end());
        
        // int n = nums.size();
        // k = k%n;
        // vector<int> v;
        // for(int i=n-1; i>=n-k; i--){
        //    v.push_back(nums[i]);
        // }
        // for(int i=n-k-1; i>=0; i--){
        //     nums[i+k] = nums[i];
        // }
        // reverse(v.begin(), v.end());
        // int j=0;
        // for(int i=0; i<k; i++){
        //     nums[i] = v[j++];
        // }
        
    }
};