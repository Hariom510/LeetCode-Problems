class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         double ans;
//         int median;
//         vector<int> v3;
        
//         merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v3.begin());
        
//         if((v3.size()%2 != 0)){
//             int x = v3.size()/2;
//             median = v3[x];
//         }
//         ans = double(median);
//         return ans;
        vector<int> v;
         double ans =0.0;
//         int n1 = nums1.size();
//         int n2 = nums2.size();
        
        for(auto num: nums1){
            v.push_back(num);
        }
        for(auto num: nums2){
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        if(v.size()==0) return 0;
        
        if(v.size()%2 !=0){
            ans = v[(v.size())/2];
        }
        else{
            ans = v[(v.size()-1)/2] + v[(v.size())/2];
            ans = ans/2;
        }
        
        return ans;
        
    }
};