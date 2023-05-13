class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n = matrix.size();
//         int m = matrix[0].size();
        
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(matrix[i][j] == target)
//                     return true;
//             }
//         }
//         return false;
        
        int n = matrix.size(); //row
        int m = matrix[0].size(); // col
            
        int low = 0, high = n*m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[mid/m][mid%m]>target){
                high = mid-1;
            }
            else if(matrix[mid/m][mid%m]<target){
                low = mid+1;
            }
            else{
                return true;
            } 
        }
        return false;
        
        
    }
};