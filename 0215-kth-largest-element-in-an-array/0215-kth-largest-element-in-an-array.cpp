class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // priority_queue<int> pq;
        // int n= nums.size();
        // for(auto i: nums)pq.push(i);
        // while(--k){
        //     pq.pop();
        // }
        
        // return pq.top();
        
        
        map<int, int> m;
        priority_queue<pair<int, int>> pq;
        for(auto i: nums)m[i]++;
        
        for(auto i: m){
            pq.push({i.first, i.second});
        }
        
        while(!pq.empty()){
            int cnt = pq.top().second;
            while(cnt--){
                k--;
                if(k==0)return pq.top().first;
            }
            pq.pop();
        }
        
        return 0;
        
    }
};