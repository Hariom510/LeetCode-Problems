class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        int i = m-1;
        int j = 0;
        
        while(i>=0 && j<n){
           if(grid[i][j]<0){
               count += (n-j);
               i = i-1;
           } 
            else{
                j= j+1;
            }
        }
        return count;
        
        // for(int i=0; i<grid.size(); i++){
        //     for(int j=0; j<grid[0].size(); j++){
        //         if(grid[i][j] <0){
        //             ++count;
        //         }
        //     }
        // }
        // return count;
    }
};