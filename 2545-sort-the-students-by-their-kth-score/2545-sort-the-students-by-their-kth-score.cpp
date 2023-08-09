class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m = score.size();
        int n = score[0].size();
        
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<m; i++){
            pq.push({score[i][k], i});
        }
        
        vector<vector<int>> res;
        while(!pq.empty()){
            int row = pq.top().second;
            res.push_back(score[row]);
            pq.pop();
        }
        
        return res;
    }
};