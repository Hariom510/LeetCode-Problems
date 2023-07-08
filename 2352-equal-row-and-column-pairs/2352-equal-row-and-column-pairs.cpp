class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> v;
        
        int res =0;
        int m = grid[0].size();
        for(int i=0; i<n; i++){
            vector<int> v1;
            for(int j=0; j<m; j++){
                v1.push_back(grid[j][i]);
            }
            v.push_back(v1);
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i]==v[j])res++;
            }
        }
        
        return res;
    }
};