class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxi = 0;
        int i=0,j=0;
        int n = nums.size();
        set<int> s;
        long long currSum =0;
        while(j<n){
            while(s.find(nums[j])!= s.end()){
                s.erase(nums[i]);
                currSum -= nums[i];
                i++;
            }
            s.insert(nums[j]);
            currSum += nums[j];
            if(j-i+1 == k){
                maxi = max(maxi, currSum);
                s.erase(nums[i]);
                currSum -= nums[i];
                i++; 
            }
            j++;  
        }
        return maxi;
    }
};