class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> v1;
        vector<int> v2;
        
        for(int i=0; i<matrix.size(); i++){
            int mini = INT_MAX;
            for(int j=0;j<matrix[i].size(); j++){
                mini = min(mini, matrix[i][j]);
            }
             v1.push_back(mini);  
        }
        for(int j=0; j<matrix[0].size(); j++){ 
            int maxi = INT_MIN;
            for(int i=0;i<matrix.size(); i++){
                 maxi = max(maxi, matrix[i][j]);
            }
             v2.push_back(maxi);  
        }
        vector<int> ans;
        for(int i=0; i<v1.size(); i++){
            for(int j=0; j<v2.size(); j++){
                if(v1[i] == v2[j])
                    ans.push_back(v1[i]);
            }
        }
        return ans;
        
    }
};