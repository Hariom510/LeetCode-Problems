class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n = ranges.size();
        set<int> s;
        for(int i=0; i<n; i++){
            for(int j=ranges[i][0]; j<=ranges[i][1]; j++){
                s.insert(j);
            }
        }
        for(int i=left; i<=right; i++){
            if(s.find(i)==s.end())return false;
        }
        return true;
    }
};