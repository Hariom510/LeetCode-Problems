class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        for(auto i: nums1){
            m[i]++;
        }
        
        for(auto i: nums2){
            if(m.find(i)!=m.end()){
                return i;
            }
        }
        
        return -1;
    }
};