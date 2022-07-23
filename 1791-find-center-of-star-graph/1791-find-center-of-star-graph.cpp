class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> m;
        
        for(int i=0; i<edges.size(); i++){
            for(auto k: edges[i]){
                m[k]++;
            }
        }
        for(auto i: m){
            if(i.second==edges.size()){
                return i.first;
            }
        }
        return -1;
    }
};