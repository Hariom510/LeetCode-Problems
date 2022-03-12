class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ans =0;
        map<vector<int>, int> m;
        
        for(auto it: dominoes){
            sort(it.begin(), it.end());
            if(m.find(it)!= m.end()){
                ans += m[it]++;
            }
            else{
                m[it]++;
            }
        }
        return ans;
        
    }
};