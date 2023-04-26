class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> m;
        // set<int> s1;
        set<int> s;
        int n= nums.size();
        int rep;
        int res = (n*(n+1))/2;
        int sum =0;
        for(auto i: nums){
            m[i]++;
        }
        for(int i=0; i<n; i++){
            if(m[nums[i]]>=2){
                rep = nums[i];
            }
            s.insert(nums[i]);
        }
        for(auto i: s){
            sum += i;
        }
        vector<int> v(2);
        v[0]= rep;
        v[1]= res-sum;
        // v.push_back(res-sum);
        return v;
        
    }
};