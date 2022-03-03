class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v(rowIndex+1);
        vector<int> v2;
        for(int i=0; i<=rowIndex; i++){
            v[i].resize(i+1);
            v[i][0] = v[i][i] =1;
            
            for(int j=1; j<i; j++){
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
            if(i == rowIndex){
               for(int j=0; j<v[i].size(); j++){
                   v2.push_back(v[i][j]);
               }
            }
        }
        return v2;
    }
};