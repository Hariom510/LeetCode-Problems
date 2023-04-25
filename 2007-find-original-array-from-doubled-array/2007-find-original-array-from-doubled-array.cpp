class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        map<int, int> m;
        int n= changed.size();
        if(n%2 !=0) return {};
        vector<int> v;
        for(auto i: changed){
            m[i]++;
        }
        sort(changed.begin(), changed.end());
        for(auto i:changed){
            if(m[i] && m[2*i]){
                v.push_back(i);
                m[i]--;
                m[2*i]--;
            }
        }
       if(v.size()==n/2){
           for(auto i: m){
               if(i.second!=0)return {};
           }
           return v;
       }
        
        return {};
    }
};