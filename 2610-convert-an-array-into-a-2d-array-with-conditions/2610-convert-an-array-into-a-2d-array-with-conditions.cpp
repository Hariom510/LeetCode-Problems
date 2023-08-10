class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> m;
        for(auto i: nums)m[i]++;
        int maxi =0;
        for(auto i: m){
            maxi = max(maxi, i.second);
        }
        vector<vector<int>> v;
        for(int j=0; j<maxi; j++){
            vector<int> temp;
            for(auto i: m){
                if(i.second>0){
                    temp.push_back(i.first);
                    m[i.first]--;
                }
            }
            v.push_back(temp);
        }
        return v;  
    }
};