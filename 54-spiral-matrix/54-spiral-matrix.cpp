class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
         
        int T,B,L,R,dir;
        T = 0;
        B = matrix.size()-1;
        L =0;
        R = matrix[0].size()-1;
        dir =0;
        int i;
        vector<int> v;
        while(T<=B && L<=R){
            if(dir ==0){
                for(i=L; i<=R; i++){
                    v.push_back(matrix[T][i]);
                }
                T++;
            }
            else if(dir == 1){
                for(i=T; i<=B; i++){
                    v.push_back(matrix[i][R]);
                }
                R--;
            }
            else if(dir == 2){
                for(i=R; i>=L; i--){
                    v.push_back(matrix[B][i]);
                }
                B--;
            }
            else if(dir ==3){
                for(i =B; i>=T; i--){
                    v.push_back(matrix[i][L]);
                }
                L++;
            }
            dir = (dir+1)%4;
        }
        
        return v;
    }
};