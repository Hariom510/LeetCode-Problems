class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> diff(m, vector<int>(n));
        vector<int> row0(m);
        vector<int> col0(n);
        vector<int> row1(m);
        vector<int> col1(n);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    row0[i]++;
                    col0[j]++;
                }
                else{
                    row1[i]++;
                    col1[j]++;
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                diff[i][j] = row1[i]+col1[j] - row0[i]-col0[j];
            }
        }
        
        return diff;
        
    }
};