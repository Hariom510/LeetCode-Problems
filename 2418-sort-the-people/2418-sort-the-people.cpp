class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int,int>> pq;
        int n = names.size();
        for(int i=0; i<n; i++)pq.push({heights[i], i});
        vector<string> v;
        
        while(!pq.empty()){
            int idx = pq.top().second;
            pq.pop();
           v.push_back(names[idx]); 
        }
        
        return v;
        
    }
};