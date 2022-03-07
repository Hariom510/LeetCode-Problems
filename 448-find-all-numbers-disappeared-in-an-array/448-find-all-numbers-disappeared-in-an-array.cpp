class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s;
        int n= nums.size();
        vector<int> v;
        for(auto num:nums){
            s.insert(num);
        }
        for(int i=1; i<=n; i++){
            if(s.find(i)==s.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};