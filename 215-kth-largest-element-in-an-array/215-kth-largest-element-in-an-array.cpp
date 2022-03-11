class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        
        for(auto num: nums){
            m[num]++;
        }
        priority_queue<pair<int, int>> q;
        for(auto val: m){
            q.push({val.first, val.second});
        }

        while(!q.empty()){
            int cnt = q.top().second;
            while(cnt--){
                k--;
                if(k==0) return q.top().first;
            }
            q.pop();
        }
        return 0;
    }
};