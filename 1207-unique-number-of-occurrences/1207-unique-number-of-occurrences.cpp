class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        set<int> s;
        for(auto num: arr){
            m[num]++;
        }
        for(auto it: m){
            s.insert(it.second);
        }
        if(s.size() == m.size()) return true;
        return false;
    }
};