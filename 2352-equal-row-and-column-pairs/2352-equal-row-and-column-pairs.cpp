class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> m;
        //storing the frequency of each row.
        for(auto i: grid){
            m[i]++;
        }
        
        int ans =0;
        
        for(int i=0; i<grid.size(); i++){
           
            vector<int> v;
            //extracting columns in a vector
            for(int j=0; j<grid.size(); j++){
                v.push_back(grid[j][i]);
            }
            ans += m[v];
        }
        
        return ans;
    }
};