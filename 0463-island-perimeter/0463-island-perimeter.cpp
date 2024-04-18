class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.size()==0) return 0;
        int peri = 0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] ==1){
                      peri +=4;
                if(i>0 && grid[i-1][j] ==1)
                    peri -=2;
                if(j>0 && grid[i][j-1] ==1)
                    peri -=2;
                }
                  
            }
        }
        return peri;
    }
};