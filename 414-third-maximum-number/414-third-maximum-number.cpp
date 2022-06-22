class Solution {
public:
    int thirdMax(vector<int>& nums) {
//         int n = nums.size();
//         int count =0;
//         unordered_map<int,int> m;
//         unordered_set<int> s;
//         for(auto num: nums){
//             m[num]++;
//         }
        
//         for(int i=0; i<n; i++ ){
//             s.insert(nums[i]);
//         }
//         vector<int> v(s.begin(), s.end());
            
//             if(v.size()>=3){
//                 for(int i=0; i<v.size(); i++){
                    
//                     if(m[v[i]] ==1) count++;
//                     if(count ==3) return v[i];
//             }
//         }
        unordered_map<int, int> m;
        for(auto i: nums){
            m[i]++;
        }
        
        priority_queue<pair<int, int>> q;
        for(auto val: m){
            q.push({val.first, val.second});
        }
        if(q.size()>=3){
            q.pop();
            q.pop();
            return q.top().first;
        }
        else{
            return q.top().first;
        }
        
        return 0;
    }
};