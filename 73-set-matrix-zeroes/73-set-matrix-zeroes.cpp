class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> v1(matrix.size(),1);  //row
        vector<int> v2(matrix[0].size(),1); //column
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] ==0){
                    v1[i] = 0;
                    v2[j] =0;
                }
            }
        }
         for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if( v1[i] ==0 || v2[j] ==0){
                    matrix[i][j] =0;
                }
            }
        }
        
        
    }
};