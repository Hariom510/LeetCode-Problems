class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        unordered_map<string, int> m;
        //please remember the logic
        
        for(int i=0; i<n; i++){
            m[paths[i][0]]++;
        }
        for(int i=0; i<n; i++){
            if(m[paths[i][1]] <1)
                return paths[i][1];
        }
        return "";
    }
};