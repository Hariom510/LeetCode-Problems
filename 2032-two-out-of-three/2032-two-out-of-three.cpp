class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> v;
        
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j])
                    v.push_back(nums1[i]);
            }
        }
          for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums3.size(); j++){
                if(nums1[i] == nums3[j])
                    v.push_back(nums1[i]);
            }
        }
          for(int i=0; i<nums2.size(); i++){
            for(int j=0; j<nums3.size(); j++){
                if(nums2[i] == nums3[j])
                    v.push_back(nums2[i]);
            }
        }
        set<int> s;
        for(auto num: v){
            s.insert(num);
        }
        v.assign(s.begin(), s.end());
        return v;
    }
};