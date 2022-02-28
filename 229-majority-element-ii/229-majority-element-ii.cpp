class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        set<int> s;
        // vector<int> v;
        int n =nums.size();
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        
        for(auto it: nums){
            if(m[it] > n/3){
                s.insert(it);
                
            }
        }
        vector<int> v(s.begin(), s.end());
        
        return v;
    }
};