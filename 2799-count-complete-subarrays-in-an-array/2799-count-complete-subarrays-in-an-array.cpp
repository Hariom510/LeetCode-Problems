class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        int res=0;
        for(auto i: nums){
            s.insert(i);
        }
        int len = s.size();
        for(int i=0; i<n; i++){
            set<int> s1;
            for(int j=i; j<n; j++){
                s1.insert(nums[j]);
                if(s1.size()==len)res++;
            }
        }
        
        return res;
        
    }
};