class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int> m;
        for(auto i: nums){
            m[i]++;
        }
        
        int maxi = INT_MIN;
        for(auto i: nums){
            if(i>maxi && m.find(-i)!=m.end()){
                maxi = i;
            }
        }
        
        return maxi==INT_MIN ? -1 : maxi;
    }
};