class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> m;
        set<int> s1;
        set<int> s;
        int n= nums.size();
        int res = (n*(n+1))/2;
        int sum =0;
        for(auto i: nums){
            m[i]++;
        }
        for(int i=0; i<n; i++){
            if(m[nums[i]]>=2){
                s1.insert(nums[i]);
            }
            s.insert(nums[i]);
        }
        for(auto i: s){
            sum += i;
        }
        vector<int> v(s1.begin(), s1.end());
        v.push_back(res-sum);
        return v;
        
    }
};