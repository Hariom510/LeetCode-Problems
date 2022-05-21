class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int ans =0;
        string res= "";
        int n = nums.size();
        for(int i=0; i<nums.size();i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target)
                    ans++;
            }
        }
        
        for(int i=n-1; i>=0;i--){
            for(int j=i-1; j>=0; j--){
                if(nums[i]+nums[j] == target)
                    ans++;
            }
        }
        return ans;
    }
};