class Solution {
    void per(vector<int>& nums,  vector<vector<int>> &ans, vector<int> &ds, vector<int> freq){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0; i<nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                per(nums, ans, ds, freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);
        per(nums, ans, ds, freq);
        
        return ans;
    }
};