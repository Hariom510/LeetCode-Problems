class Solution {
public:
    int solve(vector<int>& nums, int val){
        int n = nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(nums[i]>=val)count++;
        }
        return count;
    }
    
    int specialArray(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int l = 1;
        int n = nums.size();
        int r= n;
        while(l<=r){
            int mid = l+(r-l)/2;
            int cnt = solve(nums,mid);
            if(cnt == mid ) return mid;
            else if(mid > cnt) r=mid-1;
            else l = mid+1;
        }
        return -1;
    }
};