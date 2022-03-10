class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int l =0, r= n-1;
        
        for(int i=0; i<n; i++){
            int mid = (l+r)/2 ;
            if(nums[mid] == target) return mid;
            else if(target>nums[mid]){
                l= mid+1;
            }
            else if(target<nums[mid]){
                r = mid-1;
            }
        }
        return -1;
    }
};