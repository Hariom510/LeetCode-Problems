class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> v = arr;
        sort(v.begin(), v.end());
        unordered_map<int , int> m;
        int rank = 1;
        for(int i=0; i<n; i++){
            if(!m.count(v[i])){
                m[v[i]] = rank++;
            }
        }
        vector<int> res;
        for(int x: arr){
            res.push_back(m[x]);
        }
        return res;
    }
};