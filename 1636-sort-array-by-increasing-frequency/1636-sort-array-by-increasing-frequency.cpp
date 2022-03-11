class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> v;
        for(auto num: nums){
            m[num]++;
        }
        priority_queue<pair<int, int>> q;
        for(auto val:m){
            q.push({-(val.second), (val.first)});
        }
        while(!q.empty()){
            int cnt = -q.top().first;
            while(cnt--){
                v.push_back(q.top().second);
            }
            q.pop();
        }
        return v;
    }
};