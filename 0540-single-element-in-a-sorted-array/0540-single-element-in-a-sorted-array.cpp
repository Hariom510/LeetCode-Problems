class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // map<int,int> m;
        // int n=nums.size();
        // for(auto i:nums){
        //     m[i]++;
        // }
        // for(int i=0; i<n; i++){
        //     if(m[nums[i]]==1)return nums[i];
        // }
        // return 0;
        
        //Binary search
        //at even index first element is there and at 
        // odd indx its duplicate is there
        int left =0, right=nums.size()-1;
        while(left<right){
            int mid = (left+right)/2;
            if((mid%2==0 && nums[mid]==nums[mid+1]) ||
               (mid%2!=0 && nums[mid]==nums[mid-1])){
               //that means there is no problem till mid
                left= mid+1;
            }
            else{
                //thre is a problem between left to middle
                right = mid;
            }
        }
        return nums[left];
        
    }
};