class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v;
        vector<int> v1;
        vector<int> v2;
        int n1= nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for(auto num: nums1){
            m1[num]++;
        }
        for(auto num: nums2){
            m2[num]++;
        }
        for(auto i: m1){
            if(m2.find(i.first) == m2.end()){
                v1.push_back(i.first);
            }
        }
        for(auto i: m2){
            if(m1.find(i.first) == m1.end()){
                v2.push_back(i.first);
            }
        }
        v.push_back(v1);
        v.push_back(v2);
        return v;
        
    }
};