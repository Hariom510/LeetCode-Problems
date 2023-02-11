class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> m;
        set<int> s;
        int n = nums.size();
        int j=0,i=0;
        long long int sum=0,ans=0;
        while(j<n){
           
           while(s.find(nums[j])!=s.end()){
               s.erase(nums[i]);
               sum -= nums[i];
               i++;
           }
            s.insert(nums[j]);
            sum += nums[j]; 
            j++;
            ans = max(ans,sum);
        }
        return ans;
    }
};