class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int rowstart =0;
        int colstart =0;
        int rowend = n-1;
        int colend = n-1;
        int cnt =1;
        while(rowstart<=rowend && colstart<=colend){
            //there will be four steps.
            //from left to right
            for(int i= colstart; i<=colend; i++){
                v[rowstart][i] = cnt++;
            }
            rowstart++;
            
            //from top to bottom
            for(int i=rowstart; i<=rowend; i++){
                v[i][colend] = cnt++;
            }
            colend--;
            
            //from right to left
            for(int i=colend; i>=colstart; i--){
                v[rowend][i] = cnt++;
            }
            rowend--;
            
            //from bottom to up
            for(int i=rowend; i>=rowstart; i--){
                v[i][colstart] = cnt++;
            }
            colstart++;
            
        }
        return v;
    }
};