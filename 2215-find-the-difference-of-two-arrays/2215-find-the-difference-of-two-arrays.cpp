class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v(2);
        
        vector<int> v1;
        vector<int> v2;
        map<int, int> m1;
        map<int, int> m2;
        for(auto i: nums1)m1[i]++;
        
        for(auto i:nums2) m2[i]++;
        
        for(auto i: m1){
            if(m2.find(i.first)==m2.end()){
                v1.push_back(i.first);
            }
        }
        for(auto i: m2){
            if(m1.find(i.first)==m1.end()){
                v2.push_back(i.first);
            }
        }
        
        v[0] = v1;
        v[1] = v2;
        
        return v;
        
        
    }
};