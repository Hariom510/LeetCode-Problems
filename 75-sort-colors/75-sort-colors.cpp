class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int count0 =0;
        int count1 =0;
        int count2 =0;
        int n= nums.size();
        for(int i= 0; i<n; i++){
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else if(nums[i] == 2) count2++;
        }
        for(int i=0; i<count0; i++){
            nums[i] = 0;
        }
        for(int i=count0; i<(count0+count1); i++){
            nums[i] = 1;
        }
        for(int i=(count0+count1); i<(count0+count1+count2); i++){
            nums[i] = 2;
        }
        
    }
};