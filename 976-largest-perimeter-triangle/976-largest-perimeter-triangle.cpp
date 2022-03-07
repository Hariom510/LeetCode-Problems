class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans;
        sort(nums.begin(), nums.end());
        // largest perimeter can be found from last.
        //triangle property used
        for(int i= nums.size()-1; i>=2; i--){
        int a = nums[i];
        int b= nums[i-1];
        int c= nums[i-2];
        if(a<b+c) return (a+b+c);
        }
        
        
        return 0;
    }
};