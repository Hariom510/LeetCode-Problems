class Solution {
public:
    string frequencySort(string s) {
        int n= s.size();
        unordered_map<char, int> m;
       
        for(int i=0; i<n; i++){
            m[s[i]]++;
        }
        
        priority_queue<pair<int, char>> q;
        for(auto val: m){
            q.push({val.second, val.first});
        }
        string ans ="";
        while(!q.empty()){
            int ct = q.top().first;
            while(ct--){
                ans += q.top().second;
            }
            q.pop();
        }
        
        return ans;
        
    }
};