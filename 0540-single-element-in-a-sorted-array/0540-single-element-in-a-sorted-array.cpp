class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        for(auto i:nums){
            m[i]++;
        }
        for(int i=0; i<n; i++){
            if(m[nums[i]]==1)return nums[i];
        }
        
        return 0;
        
    }
};