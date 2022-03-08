class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int, int> m;
        for(auto num: nums1){
            m[num]++;
        }
        for(auto num2: nums2){
            if(m[num2]-- >0){
                v.push_back(num2);
            }
        }
         return v;   
        
    }
};