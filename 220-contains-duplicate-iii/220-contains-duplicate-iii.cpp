class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair <int,int>> v;
        
        int n= nums.size();
        for(int i=0; i<n; i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(), v.end());
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs((long)v[i].first -(long)v[j].first) <=t){
                    if(abs(v[i].second - v[j].second) <=k){
                        return true;
                    }
                }
                else{
                    break;
                }
            }
        }
        return false;
    }
};