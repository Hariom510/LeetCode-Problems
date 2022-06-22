class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
//         vector<long> v;
//         for(auto i: nums){
//             v.push_back(stoi(i));
//         }
//         unordered_map<int, int> m;
//         for(auto val: v){
//             m[val]++;
//         }
//         priority_queue<pair<int, int>> q;
//         for(auto i: m){
//             q.push({i.first, i.second});
//         }
//         while(!q.empty()){
//             int cnt = q.top().second;
//             while(cnt--){
//                 k--;
//                 if(k==0){
                    
//                     return to_string(q.top().first);
//                 }
//             }
//             q.pop();
//         }
//         return 0;
        
        priority_queue<pair<int, string>> q;
        for(auto num: nums){
            q.push({num.size(), num});
        }
        while(k-->1){
            q.pop();
        }
        return q.top().second;
        
    }
};