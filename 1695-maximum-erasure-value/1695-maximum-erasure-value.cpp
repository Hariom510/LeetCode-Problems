class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        int i=0,j=0;
        int res=0;
        int sum =0;
        while(i<n && j<n){
            if(s.find(nums[j])==s.end()){
                sum += nums[j];
                s.insert(nums[j++]);
                res = max(res, sum);
            }
            else{
                sum -= nums[i];
                s.erase(nums[i++]);  
            }
        }
        
        return res;
    }
};