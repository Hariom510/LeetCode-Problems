class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            int x = nums[i];
            int ans =0;
            while(x){
                int rem = x%10;
                x = x/10;
                ans = ans*10+ rem;
            }
            
            s.insert(ans);
        }
        
        return s.size();
    }
};