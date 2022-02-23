class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        
        int posIdx =0; int negIdx =1;
        
        for(auto num: nums){
            if(num>0){
                ans[posIdx] = num;
                posIdx += 2;
            }
            if(num<0){
                ans[negIdx] = num;
                negIdx += 2;
            }
        }
        return ans;
    }
};