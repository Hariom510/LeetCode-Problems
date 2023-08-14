class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> v(n, 0);
        int posIdx=0, negIdx=1;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                v[posIdx] = nums[i];
                posIdx += 2;
            }
            if(nums[i]<0){
                v[negIdx] = nums[i];
                negIdx += 2;
            }
        }
        return v;
    }
};