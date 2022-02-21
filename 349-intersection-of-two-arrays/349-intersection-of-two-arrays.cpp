class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {         
        set<int> s1, s2;
        for(int i=0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            s2.insert(nums2[i]);
        }
        
        vector<int> v;
        for(auto i: s1){
            if(s2.find(i) != s2.end()){
                v.push_back(i);
            }
        }
        return v;
        
    }
};